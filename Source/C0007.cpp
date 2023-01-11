/*
* Chương 1: Lưu đồ thuật toán
*Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	float S = 0.0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		S += (float)i / (i + 1);
	cout << "S" << "(" << n << "): " << S;
	return 1;
}