#include <iostream>
using namespace std;
int main()
{
	int max,n;
	cout<<" nhap so gia tri cafn ktra n= ";
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cout<<" nhap gia tri thu "<<i+1<<" ";
		cin>>a[i];
		cout<<"\n ";
	}
	for(int i=0;i<n;i++)
	{
	if(a[i]>a[i-1])
		{
			max=a[i];
		}	
	}
	cout<<" gia tri lon nhat la "<<max;
	return 1;
}
