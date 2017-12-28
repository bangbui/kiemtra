#include <iostream>
using namespace std;

void PhanTich(int n)
{
	cout << "tich cac so nguyen to cua" << n << " la : " << n << ":=";
	for (int i = 2; i <= n; i++)
	{
		for (int j = i;;)
		{
			if (n % j == 0)
			{
				cout << j << " * ";
				n /= j;
			}
			else
				break;
		}
	}
}
void main()
{
	int n;
	cout << "nhap so can kiem tra :";
	cin >> n;
	PhanTich(n);

}
