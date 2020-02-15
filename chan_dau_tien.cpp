#include<iostream>
using namespace std;
int main()
{
	int a[100],n;
	cout <<" so gia tri can ktra ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<" nhap so thu "<<i+1<<" ";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << " so chan dau tien la "<<a[i];
			break;
		}
	}
	return 1;
}
