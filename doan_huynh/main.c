#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct
{
    int tu;
    int mau;
 }phan_so;

phan_so rut_gon(phan_so ps) {
    int a = ps.tu, b = ps.mau;
    if (a < 0) a = -a; 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int USCLN = a;
    ps.tu /= USCLN;
    ps.mau /= USCLN;
    return ps;
}


void main()
{
    phan_so ps = { 9, 12 };
    phan_so result = rut_gon(ps);
    printf("Phan so rut gon: %d/%d\n", result.tu, result.mau);
    
}	
