#include <stdio.h>


int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


class phan_so {
public:
    int tu_so;
    int mau_so;

  
    void rut_gon() {
        int uoc_chung_lon_nhat = ucln(tu_so, mau_so);
        tu_so /= uoc_chung_lon_nhat;
        mau_so /= uoc_chung_lon_nhat;
    }
};

int main() {
    phan_so a;
    a.tu_so = 6;
    a.mau_so = 9;

    a.rut_gon();  

    printf("result sau rut gon: %d/%d\n", a.tu_so, a.mau_so);


}
