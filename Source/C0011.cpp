/*
* Chương 1: Lưu đồ thuật toán
*Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	long S = 0;
	long P = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		P *= i;
		S += P;
	}
	cout << "S(" << n << ")" << "= " << S;
	return 1;


}