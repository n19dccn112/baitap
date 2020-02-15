#include <iostream>
using namespace std;
int main()
{
	cout<<"dem so luong uoc cua n so n= ";
	int n,dem=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		dem=dem+1;	
		}
	}
	cout<<dem;
	return 1;
}
