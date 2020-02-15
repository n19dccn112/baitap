#include <iostream>
#include <iomanip>
using namespace std;
void input(float mang[][100],int n)
{
	for(int i=0 ; i<n; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<" nhap phan tu ["<<i<<"]["<<j<<"] ";
			cin>>mang[i][j];
		}
	}
}
void out(float mang[][100],int n)
{
	for(int i=0 ; i<n; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cout<<setw(5)<<mang[i][j];
		}
		cout<<endl;
	}
}
int main ()
{
float mang[100][100];
int n;
cin>>n;
input(mang,n);
out(mang,n);
return 0;	
}
