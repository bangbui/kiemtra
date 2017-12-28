#include <iostream>
using namespace std;



void PhanTich(int n)
{
	for (int i = 2; i <= n; i++)
	{
		for (int j = i;;)
		{
			if (n % j == 0 && KiemTra(j))
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
	while (n>0 && i <= n)
	{
		if (n%i == 0)
			cout << i << " ";
		i++;
	}
	PhanTich(n);
	return 0;
}
