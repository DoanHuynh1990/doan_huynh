#include "phan_so.h"

phan_so phan_so::nhan_phan_so(phan_so khac) {
    phan_so kq;
    kq.tu_so = tu_so * khac.tu_so;
    kq.mau_so = mau_so * khac.mau_so;
    return kq;
}
