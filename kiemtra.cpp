#include <iostream>
using namespace std;

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
	int i = 2;
	while (n>0 && i <= n)
	{
		for (int j = i;;)
			if (n%j == 0 && KiemTra(j))
			{
			cout << j << " ";
			n /= j;
			}
			else
				break;
		i++;
	}
	return 0;
}
