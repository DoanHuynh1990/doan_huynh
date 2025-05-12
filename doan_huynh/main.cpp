#include <stdio.h>

class phan_so {
public:
    int tu_so;
    int mau_so;

    void cong(phan_so khac) {
        tu_so = tu_so * khac.mau_so + khac.tu_so * mau_so;
        mau_so = mau_so * khac.mau_so;
    }
};

void main() {
    phan_so a;
    a.tu_so = 1;
    a.mau_so = 2;

    phan_so b;
    b.tu_so = 3;
    b.mau_so = 4;

    a.cong(b); 

    printf("result: %d/%d\n", a.tu_so, a.mau_so);


}
