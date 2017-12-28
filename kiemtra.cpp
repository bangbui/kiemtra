#include <iostream>
using namespace std;

int main()
{
	int n;
	int tich = 1;
	cout<<"Nhap n: ";
	cin>>n;
	int i=2;
	while(n>0 && i<=n)
	{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}
	cout << "tich 2 so nguyen la:" << tich << endl;
	return 0;
	system("pause");
}
int tich(int n)
{
	int tich = 1;
	for (int i = 0; i <= n; i++)
		tich = tich*i;
	return tich;
}
