#include <iostream>
using namespace std;

int main()
{
	int n;
	int tich = 1;
	cout << "Nhap n: ";
	cin >> n;
	int i = 2;
	while (n>0 && i <= n)
	{
		if (n%i == 0)
			cout << i << " ";
		i++;
	}
	if (tich == n)
	{
		cout << "Dap an cua so la:" << tich << endl;
	}
	else
		return 0;
}
