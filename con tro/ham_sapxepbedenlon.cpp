#include <iostream>
#include <iomanip>
void input ( int *mang, int n);
void sapxep ( int *mang , int n);
void output ( int *mang, int n);
using namespace std;
int main ()
{
	int n;
	cout<<" nhap so cac so can sx: ";
	cin>>n;
	int *mang =new int [n];
	input(mang,n);
	sapxep(mang,n);
	output(mang,n);
	return 0;
}
void input ( int *mang, int n)
{
	for( int i=0; i<n; i++)
	{
		cout<< " so thu "<<i+1<<"    ";
		cin>> *(mang + i);
	}
}
void sapxep ( int *mang , int n)
{
	int phu=0;
	for ( int i=1; i<n; i++)
	{
		for ( int j=n-1; j>=i; j--)
		{
			if( *(mang + j) < *(mang + j - 1))
		{
			phu = *(mang + j);
			*(mang + j)= *(mang + j - 1);
			*(mang + j -1)= phu;
		}
		}
	}
}
void output ( int *mang, int n)
{
	for( int i=0; i<n; i++)
	{
		cout<<setw(5)<< *(mang + i);
	}
}
