#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// vung ben ngoai ham
//int bien_toan_cuc;	
void main()
{
	//vung ben trong ham
	//unsigned char x = 1233;
	int x = 10;
	int y = 13;

	printf("nhap gia tri cho x:");
	scanf_s("%d", &x);

	printf("nhap gia tri cho y:");
	scanf("%d", &y);

	if (x > y)
	{
		printf("Gia tri x:%d \n", x);

	}
	else
	{
		printf("Gia tri y:%d \n", y);
	}

	
	


	//printf("Gia tri x:%d \n",x);
}