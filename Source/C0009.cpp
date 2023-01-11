/*
* Chương 1: Lưu đồ thuật toán
*Bài 9: Tính T(n) = 1 x 2 x 3…x N
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	long T = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		T += i;
	cout << "T" << "(" << n << "): " << T;
	return 1;
}