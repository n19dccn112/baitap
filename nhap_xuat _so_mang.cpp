#include <iostream>
using namespace std;
int main ()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cout<<" nhap so ";
		cin>> a[i];
	}
	for (int i=0;i<4;i++)
	{
		cout<<" xuat so "<<a[i]<<endl;
	}
	return 1;
}
