#include <iostream>
using namespace std;
void input(int *a,int n);
void output(int *a, int n);
int main()
{
int n;
cout<<" nhap do dai mang ";
cin>>n;
int *a = new int [n];
input(a,n);
output(a,n);
return 0;	
}
void input(int *a,int n)
{
	for ( int i=0; i<n; i++)
	{
		cout<<" nhap phan tu so "<<i+1<<": ";
		cin>>*(a+i);
	}
}
void output(int *a, int n)
{
	for( int i=0; i<n; i++)
	{
		cout<<" phan tu thu "<<i+1<<": ";
		cout<<*(a+i)<<endl;
	}
}
