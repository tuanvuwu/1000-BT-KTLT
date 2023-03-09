/*
* Chương 1: Lưu đồ thuật toán
*Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, x;
	long S=0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++)
		S += pow(x, i);
	cout << "S(" << n << ")" << "=" << S;
	return 1;
}