#include "phanso.h"
#include <stdio.h>

PhanSo::PhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;
}

PhanSo PhanSo::nhan(const PhanSo& ps2) {
    PhanSo kq;
    kq.tu = this->tu * ps2.tu;
    kq.mau = this->mau * ps2.mau;
    return kq;
}

