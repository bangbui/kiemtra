#include <iostream>
using namespace std;

int main()
{
	int n;
	int tich = 0;
	cout<<"Nhap n: ";
	cin>>n;
	int i=2;
	while(n>0 && i<=n)
	{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}
	tich = tich * i;
	if (tich == 0){
		cout << "Da co ket qua" << endl;
	}
	else
		return 0;
	system("pause");
}
