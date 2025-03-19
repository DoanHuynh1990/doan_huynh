#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Khai bao ham in ra cac gia tri le trong mang arr
int Find_mod(char*dia_chi,int so_luong)
{
	
	for (int i = 0; i < so_luong; i++)
	{
		if (*(dia_chi + i) % 2 != 0)
			printf("%d ", *(dia_chi + i));
		
	}
	
}


void main()
{
	 char mang1[] = { 1,-2,20,15};
	 Find_mod(mang1, 4);


}	
