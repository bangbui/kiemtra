#include <iostream>
using namespace std;

<<<<<<< HEAD


=======
>>>>>>> bf43b84e46c43e3276f506e4bb771a275a8f007e
void PhanTich(int n)
{
	for (int i = 2; i <= n; i++)
	{
		for (int j = i;;)
		{
<<<<<<< HEAD
			if (n % j == 0 && KiemTra(j))
=======
			if (n % j == 0)
>>>>>>> bf43b84e46c43e3276f506e4bb771a275a8f007e
			{
				cout << j << " * ";
				n /= j;
			}
			else
				break;
		}
<<<<<<< HEAD
	}
=======
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
>>>>>>> bf43b84e46c43e3276f506e4bb771a275a8f007e
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 2;
<<<<<<< HEAD
	while (n>0 && i <= n)
	{
		if (n%i == 0)
			cout << i << " ";
=======
	while (n > 0 && i <= n)
	{
<<<<<<< HEAD
		if (n%i == 0)
		{
					if (kiemTraSoNguyenTo(i)==0)
						cout << i << " ";
		}
>>>>>>> bf43b84e46c43e3276f506e4bb771a275a8f007e
		i++;
	}
	PhanTich(n);
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
