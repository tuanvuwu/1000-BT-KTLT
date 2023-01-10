/*
* Chương 1: Lưu đồ thuật toán
* Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
*/
#include <iostream>
using namespace std;

int main()
{
	int n, S = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
		S += i;
	cout << "S" << "(" << n << "): " << S;
	return 1;
}