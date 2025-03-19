#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Khai bao ham In ra so lon nhat trong man
int VT_max(char*dia_chi,int so_luong)
{
	int max = 0;
	for (int i = 0; i < so_luong; i++)
	{

		if (max<*(dia_chi+i))
			max= *(dia_chi + i);
		
	}
	

	return max;

}


void main()
{
	

	 char mang1[] = { 1,2,20,15};
	 for (int i = 0; i < sizeof(mang1)/sizeof(mang1[0]); i++)
	 {
		 if (mang1[i] == VT_max(mang1, 4))
			 printf("Vi tri so lon nhat:%d", i);

	 }


}	
