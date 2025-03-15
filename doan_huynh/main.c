#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 6,2,5,5,3,455,7,34,9 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	

	for (int i = 0; i < arr_size; i++)
	{
		int prime = 0;
		for (int j = 1; j <= arr[i]; j++)
		{
			if ((arr[i]%j)==0)
				prime++;
		}
		switch (prime)
		{
		case 2:
			printf("So nguyen to: %d\n", arr[i]);
		}
		
	}
	
	
}	
