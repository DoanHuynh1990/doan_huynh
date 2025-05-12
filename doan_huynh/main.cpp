#include <stdio.h>

class phan_so {
public:
    int tu_so;
    int mau_so;


    phan_so(int tu = 0, int mau = 1) {
        tu_so = tu;
        mau_so = mau;
    }

    // So sánh >
    bool operator>(phan_so khac) {
        return tu_so * khac.mau_so > khac.tu_so * mau_so;
    }

    // So sánh <
    bool operator<(phan_so khac) {
        return tu_so * khac.mau_so < khac.tu_so * mau_so;
    }

    // So sánh >=
    bool operator>=(phan_so khac) {
        return tu_so * khac.mau_so >= khac.tu_so * mau_so;
    }

    // So sánh <=
    bool operator<=(phan_so khac) {
        return tu_so * khac.mau_so <= khac.tu_so * mau_so;
    }

    // So sánh ==
    bool operator==(phan_so khac) {
        return tu_so * khac.mau_so == khac.tu_so * mau_so;
    }

    // In phân số
    void in_ps() {
        printf("%d/%d\n", tu_so, mau_so);
    }
};
void main() {
    phan_so a(1, 2);
    phan_so b(2, 3);
      
    a.in_ps();  
    b.in_ps();  

    if (a > b)
        printf("a > b\n");
    if (a < b)
        printf("a < b\n");
    if (a == b)
        printf("a == b\n");
    if (a >= b)
        printf("a >= b\n");
    if (a <= b)
        printf("a <= b\n");


}
