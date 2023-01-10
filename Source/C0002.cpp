/*
* Chương 1: Lưu đồ thuật toán
* Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
*/
#include <iostream>
using namespace std;

int main()
{
	int n, S = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		S += i * i;
	cout << "S" << "(" << n << "): " << S;
	return 1;
}