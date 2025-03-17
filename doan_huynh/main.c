#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a, b;

	printf("Input a value: ");
	scanf_s("%d", &a);
	printf("Input b value: ");
	scanf_s("%d", &b);

	printf("Hien thi a,b truoc hoan vi: %d,%d\n",a,  b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("Hien thi a,b sau hoan vi: %d,%d", a, b);

}	
