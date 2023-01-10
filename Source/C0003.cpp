/*
* Chương 1: Lưu đồ thuật toán
*Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
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
		S += (float) 1 / i;
	cout << "S" << "(" << n << "): " << S;
	return 1;
}