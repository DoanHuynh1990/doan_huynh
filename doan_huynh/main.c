#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int a, b, cout;
    int st, ed;

    st = 2, ed = 9;

    printf("In bang cuu chuong:\n");
    for (a = st; a <= ed; a++) {
        cout = a;

        for (b = 1; b <= 10; b++) {
            printf(" %3d", cout * b);
        }

        printf("\n");
    }

  
}

