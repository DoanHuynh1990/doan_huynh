#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef int so_nguyen_t;
// xay dung struct;

typedef struct
{
	int tu;
	int mau;

}phan_so;
// so sanh 2 phan so
int compare(phan_so ps1, phan_so ps2) 
{
    return (ps1.tu * ps2.mau > ps2.tu * ps1.mau);
}
// tim phan solon nhat
phan_so phansomax(phan_so arr[], int size) {
    phan_so max = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (compare(arr[i], max)) {
            max = arr[i]; 
        }
    }
    return max;
}


void main()
{

    phan_so mang[] = {
        {1,2},
        {2,3},
        {3,4},
        {4,5},
        {5,6}
    };

    int size = sizeof(mang) / sizeof(mang[0]);
    phan_so Phansolonnhat = phansomax(mang, size);

    printf("%d/%d\n", Phansolonnhat.tu, Phansolonnhat.mau);

}	
