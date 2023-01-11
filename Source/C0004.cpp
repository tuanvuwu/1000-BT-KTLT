/*
* Chương 1: Lưu đồ thuật toán
*Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	float S = 0.0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
		S += (float)1 / 2 * i;
	cout << "S" << "(" << n << "): " << S;
	return 1;
}