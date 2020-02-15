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
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&a[i]<=122))
		{
			continue;
		}
		else
		{
		a[i]=a[i]+1;
		i--;	
		}
	}
	cout<<" xoa ki tu dac biet "<<a;
	return 1;
}
