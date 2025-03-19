#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Khai bao ham tinh tong cac gia tri trong mang
int TB_sole(char*dia_chi,int so_luong)
{
	int sl = 0;
	int tong = 0;
	float ketqua = 0;
	for (int i = 0; i < so_luong; i++)
	{

		if ((*(dia_chi + i)%2) != 0){
			sl++;
			tong += *(dia_chi + i);
		}
	}
	ketqua = tong / sl;

	return ketqua;

}


void main()
{
	

	 char mang1[] = { 1,2,3,15};
	 float x = TB_sole(mang1, 4);

	 

	 //In ra tong cac gia tri trong mang

	 printf("Tong cac gia tri cua mang: %f", x);
     
}	
