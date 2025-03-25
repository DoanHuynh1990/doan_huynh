#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef int so_nguyen_t;
// xay dung struct;

typedef struct 
{
	int tu;
	int mau;

}phan_so;
phan_so nhanPhanSo(phan_so ps1, phan_so ps2)
{
    phan_so ketQua;
    ketQua.tu = ps1.tu * ps2.tu;
    ketQua.mau = ps1.mau * ps2.mau;
    return ketQua;
}

void main()
{
    phan_so ps1 = { 2, 3 }; 
    phan_so ps2 = { 4, 5 }; 

    phan_so ketQua = nhanPhanSo(ps1, ps2);

    printf("Nhan phan so: %d/%d\n", ketQua.tu, ketQua.mau);
  

}	
