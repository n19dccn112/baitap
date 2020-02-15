#include<iostream>
#include<math.h>
using namespace std;
bool cphuong(int a);
int main ()
{
	int a[6];
	for(int i=0;i<6;i++)
	{
		cout<<"nhap so can kiem tra ";
		cin>>a[i];
	}
	for (int i=0;i<6;i++)
	{
		if(cphuong(a[i])==true)
		cout<<a[i]<<" la so chinh phuong"<<endl;//"..\n" hoac <<endl
	}
	{
	return 1;	
	}
}
bool cphuong(int a)
{
	for(int i=0;i<a;i++)
	{
		if(sqrt(a)==i)
		return true;
	}
	return false;
}
