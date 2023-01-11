/*
* Chương 1: Lưu đồ thuật toán
*Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
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
		S += (float)1 / (2 * i + 1);
	cout << "S" << "(" << n << "): " << S;
	return 1;
}