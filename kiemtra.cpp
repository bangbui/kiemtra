#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int i=2;
	while(n>0 && i<=n)
	{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}
	return 0;
}
