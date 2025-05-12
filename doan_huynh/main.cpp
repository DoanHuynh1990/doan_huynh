#include <stdio.h>

class phan_so {
public:
    int tu_so;
    int mau_so;

    void tru(phan_so khac) {
        tu_so = tu_so * khac.mau_so - khac.tu_so * mau_so;
        mau_so = mau_so * khac.mau_so;
    }
};

void main() {
    phan_so a;
    a.tu_so = 5;
    a.mau_so = 6;

    phan_so b;
    b.tu_so = 1;
    b.mau_so = 3;

    a.tru(b);  

    printf("result: %d/%d\n", a.tu_so, a.mau_so);


}
