#include <cstdio>
#include <string>

using namespace std;

float mySqrt(float x) {
    float r = x;
    for (int i = 0; i < 20; i++)
        r = 0.5f * (r + x / r);
    return r;
}

class PhuongTrinhBacHai {
    float a, b, c;
public:
    PhuongTrinhBacHai(float a, float b, float c) : a(a), b(b), c(c) {}

    string giai() {
        float delta = b * b - 4 * a * c;
        float can = mySqrt(delta);
        int canNguyen = int(can + 0.5f);
        float x1 = (-b + canNguyen) / (2 * a);
        float x2 = (-b - canNguyen) / (2 * a);
        return "x1 = " + to_string(x1) + ", x2 = " + to_string(x2);
    }
};

void main() {
    float a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    PhuongTrinhBacHai pt(a, b, c);
    printf("%s\n", pt.giai().c_str());


}
