#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//khai bao 10 doi tuong kieu iteger

	int arr_1[10] = {0};   // cach 1
	int tong = 0;
	for ( int i = 0; i < 10; i++)
	{
		printf("Nhap num %d : ",i);
		scanf_s("%d", &arr_1[i]);

	}
	for (int j = 0; j < 9; j++)
	{
		tong += arr_1[j];

	}
	printf("Tong :%d", tong);




}	
