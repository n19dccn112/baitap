#include <iostream>
using namespace std;
int main ()
{
	cout<<"so can kiem tra co phai la so nguyen to ";
	int n,dem=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		dem=dem+1;
	}
		if( dem==2)
		cout<<n<<"la so nguyen to";
		else
		cout<<-1;
	return 1;
}
