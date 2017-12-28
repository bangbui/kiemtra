#include <iostream>
using namespace std;

void PhanTich(int n)
{
	for (int i = 2; i <= n; i++)
	{
		for (int j = i;;)
		{
			if (n % j == 0 && kiemtra(j))
			{
				cout << j << " * ";
				n /= j;
			}
			else
				break;

		}
	}
}
bool KiemTra(int n)
{
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	PhanTich(n);
	//KiemTra se an toan hon khi su dung truc tiep tren ham main
	getch();
	return 0;
}
