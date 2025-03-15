#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,-4,5,3,455,-6,34,9 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int max_value = 0;

	for (int i = 0; i < arr_size; i++)
	{
		if (max_value < arr[i])
		{
			max_value = arr[i];
		}
		
	}

	printf("So lon nhat : %d", max_value);
}	
