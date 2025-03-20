#include "toan.h"

// build ham tinh tong x,y
int Cong(int x, int y)
{
	int ketqua = 0;
	ketqua = x + y;
	return ketqua;

}
// build ham tinh tich x,y
int Nhan(int x, int y)
{
	int ketqua = 0;
	for (int i = 0; i < y; i++)
	{
		ketqua = Cong(ketqua, x);

	}

	return ketqua;


}