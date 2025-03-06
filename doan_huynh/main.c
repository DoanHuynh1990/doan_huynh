#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{

	printf("Xep loai hoc sinh dua vao diem TB\n");

	float diemTB = 10;


	printf("nhap gia tri cho diemTB:");
	scanf_s("%f", &diemTB);



	if (diemTB  >= 8.0)
	{
		printf("Loai : Gioi");

	}
	else if (diemTB >=6.5)
	{
		printf("Loai : Kha");
	}
	else if (diemTB >= 5.0)

	{
		printf("Loai : Trung BInh");
	}
	else
	{
		printf("Loai : Yeu");
	}

	
	


	//printf("Gia tri x:%d \n",x);
}