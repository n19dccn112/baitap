#include <iostream>
using namespace std;
int main()
{
	cout<<" nhap so dong muon xuat ";
	int d;
	cin >> d;
	int a[100][100];
	for( int i=0;i<=d;i++)
	{
		a[i][0]=1;
	}
	for( int i=1;i<d;i++)
	{
		for(int j=0;j<i;j++)
		{
			a[i+1][j+1]=a[i][j]+a[i][j+1];
		}
	}
	for( int i =1; i<d+1;i++)
	{
		for( int j=0; j<i-1;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"1"<<endl;
	}
	return 0;
}
