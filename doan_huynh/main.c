#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/// Khai bao chuoi Hello

	char str_3[] = "xin chao";
	int dem = 0;

	for (int i = 0; str_3[i] != 0; i++)
	{
		dem++;
	}

	printf("dem: %d", dem);

}	
