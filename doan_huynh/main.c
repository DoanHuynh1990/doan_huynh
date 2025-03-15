#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,4,5,3,455,5,34,9 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int odd_nums = 0;
	int odd_total = 0;
	float odd_ave = 0;

		for (int i = 0; i < arr_size; i++)
		{
			if ((arr[i] % 2) != 0)
				odd_nums++;
			    odd_total += arr[i];

		}
		odd_ave = odd_total / odd_nums;
		printf("Tong so le: %d", odd_total);
		printf("Trung binh cong so le: %f", odd_ave);

	
}	
