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
	while (n > 0 && i <= n)
	{
<<<<<<< HEAD
		if (n%i == 0)
		{
					if (kiemTraSoNguyenTo(i)==0)
						cout << i << " ";
		}
		i++;
	}
	return 0;
}
	int kiemTraSoNguyenTo(int n)
	{
		bool flag = false;

		for (int i = 2; i <= n / 2; ++i)
		{
			if (n%i == 0)
			{
				flag = true;
				break;
			}
		}
		return flag;
	}

=======
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
>>>>>>> 55530c59bd9d15ee4f287d7a9d1bb7cbaaf3684b
