#include <iostream>
using namespace std;
void input( char **mang, int n);
void out ( char **mang, int n);
int main ()
{
	int n;
	cout<<" nhap so ten can xuat: ";
	cin>>n;
	char **mang =new char *[n];
	for ( int i=0; i<n; i++)
		{
			mang[i]= new char [100];
		}
	input (mang, n);
	out ( mang,n);	
	return 0;
}
void input( char **mang, int n)
{
	for( int i=0; i<n; i++)
	{
		fflush(stdin);
		cout <<" nhap ten thu "<<i+1<<":  ";
		cin.getline(*(mang + i),101); 
	}
}
void out ( char **mang, int n)
{
	for( int i=0; i<n; i++)
	{
	cout << *(mang + i)<<endl;
	}
}
