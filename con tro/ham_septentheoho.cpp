#include <iostream>
#include <iomanip>
#include <string.h>
void input(char **mang, int n);
void sapxep(char **mang, int n);
void output(char **mang, int n);
using namespace std;
int main ()
{
	int n;
	cout<<" so luong ten can ktra ";
	char **mang = new char *[n];
	{
		for (int i=0; i<n; i++)
		{
			mang[i]= new char [50];
		}
	}
	input (mang,n);
	sapxep(mang, n);
	output(mang,n);
	return 0;
}
void input(char **mang, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<" ho va ten: ";
		cin.getline(*(mang+i),51);
		cout<<endl;
	}
}
void sapxep(char **mang, int n)
{
	char *mang1 =new char[50] ;
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if( strcmp( *(mang+j), *(mang+j-1)) == -1)
			{
				strcpy(*mang1, *(mang+j));
				strcpy(*(mang+j), *(mang+j-1));
				strcpy(*(mang+j-1), *mang1);
			}
		}
	}
}
void output(char **mang, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<*(mang+i);
	}
}

