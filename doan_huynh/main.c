#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,-4,5,3,455,-6,34,9 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i]%2!=0)
		{
			printf("%d", i);
		}
	}
}	
