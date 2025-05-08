#include <stdio.h>
#include "phan_so.h"

void main() {
    phan_so a;
    a.tu_so = 1;
    a.mau_so = 2;

    phan_so b;
    b.tu_so = 2;
    b.mau_so = 3;

    phan_so c;
    c = a.nhan_phan_so(b);

    printf("Ket qua: %d/%d\n", c.tu_so, c.mau_so);

  
}

