/*
* Chương 1: Lưu đồ thuật toán
*Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
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
		S += (float)2 * i + 1 / (float) (2 * i + 2);
	cout << "S" << "(" << n << "): " << S;
	return 1;
}