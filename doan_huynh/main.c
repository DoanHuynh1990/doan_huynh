#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "Xin Chao moi nguoi ^%$";
	int str_len = 0;
	int UPPER_num = 0;

	while (str[str_len] != 0) {
		str_len++;
	}
	for (int i = 0; i < str_len; i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i] -= 32;
		}
	}
	printf("%s\n", str);


}	
