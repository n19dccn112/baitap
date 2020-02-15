#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<< " nhap so dong can xuat cua tam giac pascal: ";
	int n, a[100][100];
	cin>> n;
	for(int i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for( int i=1;i<n-1;i++)
	{
		for(int j=0;j<i;j++)
		{
			a[i+1][j+1]=a[i][j]+a[i][j+1];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=i;k<=n;k++)
		{
			cout<<"  ";
		}
		
		for(int j=0;j<=i;j++)
		{
			cout<<setw(4)<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
