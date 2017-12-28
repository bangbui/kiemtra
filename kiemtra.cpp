#include <iostream>
using namespace std;

int main()
{
	int n;
<<<<<<< HEAD
<<<<<<< HEAD
	int tich = 1;
=======
>>>>>>> 704c1f064fddcd71f8734391ea69a2e3a170a4be
	cout<<"Nhap n: ";
	cin>>n;
	int i=2;
	while(n>0 && i<=n)
<<<<<<< HEAD
=======
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
>>>>>>> 50171296e36b7aac1a130678c6a15f05add2cf18
=======
>>>>>>> 704c1f064fddcd71f8734391ea69a2e3a170a4be
	{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}
<<<<<<< HEAD
<<<<<<< HEAD
	cout << "tich 2 so nguyen la:" << tich << endl;
=======
	PhanTich(n);
>>>>>>> 50171296e36b7aac1a130678c6a15f05add2cf18
	return 0;
	system("pause");
}
int tich(int n)
{
	int tich = 1;
	for (int i = 0; i <= n; i++)
		tich = tich*i;
	return tich;
=======
	system("pause");
>>>>>>> 704c1f064fddcd71f8734391ea69a2e3a170a4be
}
