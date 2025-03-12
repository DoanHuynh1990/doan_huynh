#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a = 1;


	do
	{
		printf("Nhap vao man hinh: ", a);
		scanf_s("%d", &a);
	
	} while (a!=0);


}

