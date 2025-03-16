#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "xin chao moi nguoi ^%$";
	int str_len = 0;
	int Space_num = 0;

	while (str[str_len] != 0) {
		str_len++;
	}
	for (int i = 1; i < str_len; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (str[i] == 32 && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] -= 32;
		}
	}
	printf("%s\n", str);

}	
