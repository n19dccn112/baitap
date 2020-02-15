#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	cout<<" nhap so ten: ";
	int n;
	cin>> n;
	char a[20][100];
	for( int i=0; i<n ; i++)
	{
		fflush(stdin);
		cin.getline(a[i],101);
	}
		for( int i=0; i<n ; i++)
		{
			cout<<a[i]<<endl;
		}
	return 0;
}
