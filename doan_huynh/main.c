#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int so_tien_can_tra = 0;
	int change = 0;

	do
	{
		printf("Nhap so tien can rut: ", so_tien_can_tra);
		scanf_s("%d", &so_tien_can_tra);
		if ((so_tien_can_tra % 50000) != 0)
		{
			printf("SO TIEN CAN RUT PHAI LA BOI SO CUA 50k\n");
		}

	} while ((so_tien_can_tra%50000)!=0);


		change = so_tien_can_tra / 50000;
		a = change / 17;
		b = (change % 17)/7;
		c = ((change % 17) % 7) / 3;
		d = (((change % 17) % 7) % 3)/1;
		printf("So to 500k: %d\n", a);
		printf("So to 200k: %d\n", a+b);
		printf("So to 100k : %d\n", a + b + c);
		printf("So to 50k: %d\n", a + b + c + d);




}

