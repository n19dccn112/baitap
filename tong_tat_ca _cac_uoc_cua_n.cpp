#include <iostream>
using namespace std;
int main ()
{
	int n,sum=0;
	cout<<"tong cac so nguyen duong n voi n= ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
	{
		
		sum=sum+i;
	 }
	
	}
	cout<<sum;
	return 1;
}
