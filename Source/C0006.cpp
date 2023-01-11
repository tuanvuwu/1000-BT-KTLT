/*
* Chương 1: Lưu đồ thuật toán
*Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
*/
#include<iostream>
using namespace std;

int main()
{
	int n;
	float S = 0.0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		S += (float)1 / (i * (i + 1));
	cout << "S" << "(" << n << "): " << S;
	return 1;
}