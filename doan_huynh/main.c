#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Khai bao ham tinh tong cac gia tri trong mang
int Tong_mang(char*dia_chi,int so_luong)
{
	int ketqua = 0;
	for (int i = 0; i < so_luong; i++)
	{
		ketqua += *(dia_chi + i);

	}
	return ketqua;

}


void main()
{
	

	 char mang1[] = { 1,2,3,4 };
	 char mang2[] = { 1,2,3 };
	 int x = Tong_mang(mang1, 4);

	 //In ra tong cac gia tri trong mang

	 printf("Tong cac gia tri cua mang: %d", x);
     
}	
