#define _CRT_SECURE_NO_WARNINGS
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
    if (pf==NULL) {
        printf("mo file that bai!\n");
        return;
    }

    hocsinh_t hs_max = { "", 0, "", 0, 0, 0.0 };
    hocsinh_t hs;
      
    while (fscanf(pf, "%[^,],%d,%[^,],%d,%d\n", hs.ten, &hs.tuoi, hs.gioi_tinh, &hs.mon1, &hs.mon2)==5) {
          hs.dtb = (float)(hs.mon1 + hs.mon2) / 2;
        if (hs.dtb > hs_max.dtb) {
            hs_max = hs;
        }
    }

    fclose(pf);

    printf("Hoc sinh co diem TB cao nhat:\n");
    printf("Ten: %s\n", hs_max.ten);
    printf("Diem TB: %.2f\n", hs_max.dtb);

}
