#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 2;
	while (n > 0 && i <= n)
	{
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

