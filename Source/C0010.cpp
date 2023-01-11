/*
* Chương 1: Lưu đồ thuật toán
*Bài 10: Tính T(x, n) = x^n
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, x;
	long T = 1;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	T = pow(x, n);
	cout << "T" << "(" << n << "," << x << "): " << T;
	return 1;
}