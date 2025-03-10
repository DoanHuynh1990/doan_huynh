#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int buoc = 1;
	int mat_khau = 1234;
	int mat_khau_user = 0;
	int so_lan_nhap_sai = 0;
	int so_tien_can_rut = 0;
	while (buoc != 5)
	{

		switch (buoc)
		{
		case 1:
			printf("vui long nhap mat khau: ");
			scanf("%d", &mat_khau_user);
			if (mat_khau_user!=mat_khau)
			{
				so_lan_nhap_sai++;
				if (so_lan_nhap_sai>=3)
				{
					buoc = 5;

				}
			}
			else
			{
				buoc = 2;
			}
			break;

		case 2:
			printf("vui long nhap so tien cat rut: ");
			scanf("%d", &so_tien_can_rut);
			if (so_tien_can_rut>10000)
			{
				buoc = 2;
			}
			else
			{
				buoc = 3;
			}
			break;
		case 3:
			printf("so tien ban rut la:%d\n",so_tien_can_rut);
			buoc = 4;
			break;

		}

	}

}

