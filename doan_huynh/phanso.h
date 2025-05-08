#ifndef PHAN_SO_H
#define PHAN_SO_H

class PhanSo {
public:
    int tu;
    int mau;

  PhanSo(int tu = 0, int mau = 1);
  PhanSo nhan(const PhanSo& ps2);
  };

#endif

