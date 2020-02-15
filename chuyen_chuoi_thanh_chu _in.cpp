#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	cout<<" nhap 1 chuoi ";
	char a[100];
	cin.getline(a,101);
	for(int i=0;i<strlen(a);i++)
	{
	if(a[i]>=97&&a[i]<=122)
	{
		a[i]=a[i]-32;
	}
	}
	cout<<" chuoi in hoa "<<a;
}
