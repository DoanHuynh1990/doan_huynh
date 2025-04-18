﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ten[100];
    int tuoi;
    char gioi_tinh[10];
    int mon1, mon2;
    float dtb;
} hocsinh_t;

void main() {
    FILE* pf = fopen("C:\\Users\\win10\\Downloads\\DanhSachHocSinh1.csv", "r");
    if (pf == NULL) {
        printf("Mo file that bai!\n");
        return;
    }

    hocsinh_t danh_sach_hs[100];  
    int so_hoc_sinh = 0;
    hocsinh_t hs;

   
    while (fscanf(pf, "%[^,],%d,%[^,],%d,%d\n", hs.ten, &hs.tuoi, hs.gioi_tinh, &hs.mon1, &hs.mon2) == 5) {
        hs.dtb = (float)(hs.mon1 + hs.mon2) / 2;
        danh_sach_hs[so_hoc_sinh] = hs;
        so_hoc_sinh++;
    }

    fclose(pf);

 
    for (int i = 0; i < so_hoc_sinh - 1; i++) {
        for (int j = 0; j < so_hoc_sinh - i - 1; j++) {
            if (danh_sach_hs[j].dtb < danh_sach_hs[j + 1].dtb) {
                // Hoán đổi vị trí hai học sinh
                hocsinh_t temp = danh_sach_hs[j];
                danh_sach_hs[j] = danh_sach_hs[j + 1];
                danh_sach_hs[j + 1] = temp;
            }
        }
    }

  
    FILE* pf_out = fopen("C:\\Users\\win10\\Downloads\\DanhSachHocSinh_Sorted.csv", "w");
    if (pf_out == NULL) {
        printf("Luu file that bai!\n");
        return;
    }


    fprintf(pf_out, "Ten,Tuoi,Gioi_Tinh,Mon1,Mon2,DiemTB\n");


    for (int i = 0; i < so_hoc_sinh; i++) {
        fprintf(pf_out, "%s,%d,%s,%d,%d,%.2f\n", danh_sach_hs[i].ten, danh_sach_hs[i].tuoi, danh_sach_hs[i].gioi_tinh,
            danh_sach_hs[i].mon1, danh_sach_hs[i].mon2, danh_sach_hs[i].dtb);
    }

    fclose(pf_out);

    printf("Danh sach hoc sinh da duoc luu vao file 'DanhSachHocSinh_Sorted.csv'.\n");
}
