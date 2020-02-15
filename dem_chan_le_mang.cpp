#include <iostream>
using namespace std;
int main ()
{
	
	int dem=0;
	int a[5];
	for (int i=0;i<5;i++)
	{
		cout<<" nhap phan tu ";
		cin>>a[i];
	}
	for (int i=0;i<5;i++)
	{
	 if(a[i]%2==0)
	 {
	 	dem=dem+1;
	 }
	}
	cout<<dem<<" so chan";
	system("pause");
	return 1;
}
