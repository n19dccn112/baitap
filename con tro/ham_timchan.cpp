#include <iostream>
using namespace std;
void input(int *a, int n);
void output(int *a, int n);
int main ()
{
	int n;
	cout<<" nhap so cac phan tu ";
	cin>>n;
	int *a = new int [n];
	input (a, n);
	output (a, n);
	return 0;
}
void input(int *a, int n)
{
	for( int i=0; i<n; i++)
	{
		cout<<" nhap so thu "<<i+1<<": ";
		cin>> *(a+i);
	}
}
void output(int *a, int n)
{
	for ( int i=0; i<n; i++)
	{
		if( *(a+i)%2==0)
		{
		cout<<" phan tu chan la: ";	
		cout<<*(a+i)<<endl;
		}
	}
}
