#include<iostream>
using namespace std;
void main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 2;
	while (n>1)
	{
		if (n%i == 0)
		{
			cout << i << "*";
			n = n / i;
		}
		else
			i++;
	}
}
