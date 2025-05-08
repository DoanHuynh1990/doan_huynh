#include "phanso.h"
#include <stdio.h>

void main() {
    PhanSo a(1, 2);
    PhanSo b(3, 4);

    PhanSo c = a.nhan(b);

    printf("%d/%d\n", c.tu, c.mau);  

  }
