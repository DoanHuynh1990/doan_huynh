#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "Xin Chao moi nguoi ^%$";
	int str_len = 0;
	int Space_num = 0;

	while (str[str_len] != 0) {
		str_len++;
	}
	for (int i = 0; i < str_len; i++)
	{
		if (str[i]==32)
		{
			Space_num++;
		}
	}
	printf("So tu trong chuoi : %d", Space_num+1);



}	
