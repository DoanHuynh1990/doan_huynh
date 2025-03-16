#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "Xin chao";
	int str_len = 0;
	int UPPER_num = 0;

	while (str[str_len] != 0) {
		str_len++;
	}
	printf("Chieu dai cua chuoi: %d\n", str_len);

	for (int i = 0; i < str_len; i++)
	{
		if (str[i]>='A' && str[i]<='Z')
		{
			UPPER_num++;
		}
	}

	printf("So luong chu in HOA: %d\n", UPPER_num);

}	
