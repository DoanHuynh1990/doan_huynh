#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
   
    int a, b;
  
    printf("nhap a:");
    scanf("%d", &a);
   
    printf("nhap b:");
    scanf("%d", &b);

    while (a * b != 0) {
        if (a > b) {
            a %= b; // a = a % b
        }
        else {
            b %= a;
        }
    }
  
    printf("UCLN là :%d", a + b);
}