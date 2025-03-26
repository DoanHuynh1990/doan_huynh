#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct
{
    int tu;
    int mau;
 }phan_so;

phan_so add_fractions(phan_so a, phan_so b) {
    phan_so result;
    result.tu = a.tu * b.mau + b.tu * a.mau;
    result.mau = a.mau * b.mau;

    return result;

}

void main()
{
    phan_so ps1 = { 2, 3 };
    phan_so ps2 = { 4, 5 };

    phan_so result_add = add_fractions(ps1, ps2);
    printf("Ket qua cong phan so: %d/%d\n", result_add.tu, result_add.mau);




}	
