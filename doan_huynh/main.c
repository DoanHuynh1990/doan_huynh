#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "xin vhao moi nguoi ^%$";
	int str_len = 0;

	while (str[str_len] != 0) {
		str_len++;
	}
	for (int i = 1; i < str_len; i++)
	{
		if (str[i]=='c')
			printf("Vi tri chu c: %d", i);
	}
	

}	
