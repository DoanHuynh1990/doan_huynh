#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct
{
    char* ten;
    int tuoi;
    float diem_toan;
    float diem_van;
    float diemTB;// toan+van/2
    int xep_loai;
 }hoc_sinh;

void tinhDiemVaXepLoai(hoc_sinh* arr, int size) {
    for (int i = 0; i < size; i++) {
        // tinh diem TB
        arr[i].diemTB = (arr[i].diem_toan + arr[i].diem_van) / 2.0;

        // xep loai hoc sinh
        if (arr[i].diemTB >= 8.0) {
            arr[i].xep_loai=0;
        }
        else if (arr[i].diemTB >= 6.5) {
            arr[i].xep_loai = 1;
        }
        else if (arr[i].diemTB >= 5.0) {
            arr[i].xep_loai = 2;
        }
        else {
            arr[i].xep_loai = 3;
        }
    }
}




void main()
{
    hoc_sinh mangHocsinh[] = {
        {.ten="Nguyen van A",.tuoi=6,.diem_toan=6.7,.diem_van=5.6},
        {.ten = "Nguyen van B",.tuoi = 7,.diem_toan = 5.7,.diem_van = 9.6},
        {.ten = "Nguyen van C",.tuoi = 8,.diem_toan = 7.7,.diem_van = 6.6},
        {.ten = "Nguyen van D",.tuoi = 9,.diem_toan = 8.7,.diem_van = 7.6},
        {.ten = "Nguyen van E",.tuoi = 10,.diem_toan = 9.7,.diem_van = 5.6},
    }
    tinhDiemVaXepLoai()
}	
