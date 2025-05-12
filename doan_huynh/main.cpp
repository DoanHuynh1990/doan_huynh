#include <stdio.h>


class phan_so {
public:
    int tu_so;
    int mau_so;

   
    bool lon_hon(phan_so khac) {
        return (tu_so * khac.mau_so > khac.tu_so * mau_so);
    }
};

void main() {
    phan_so a, b;
    a.tu_so = 3;  a.mau_so = 4;  
    b.tu_so = 2;  b.mau_so = 3;   

    if (a.lon_hon(b)) {
        printf("Phan so a lon hon phan so b\n");
    }
    else {
        printf("Phan so a khong lon hon phan so b\n");
    }


}
