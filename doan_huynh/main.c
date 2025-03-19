#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Khai bao ham Thay the cac so am trong mang bang 0
int Minus_change(char*dia_chi,int so_luong)
{
	
	for (int i = 0; i < so_luong; i++)
	{
		if (*(dia_chi+i)<0)
			 *(dia_chi + i)=0;
		
	}
	
}


void main()
{
	 char mang1[] = { 1,-2,20,15};
	 Minus_change(mang1, 4);
	 for (int i = 0; i < sizeof(mang1)/sizeof(mang1[0]); i++)
	 {
		 printf("%d ", mang1[i]);
	 }

}	
