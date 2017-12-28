#include <iostream>
using namespace std;

void PhanTich(int n)
{
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
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 2;
	PhanTich(n);
	return 0;
}
