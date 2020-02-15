#include <iostream>
using namespace std;
int main()
{
	cout<<"tong 100 so le tu 1 den 100 la";
	int a;
	int sum=0;
	for(a=0;a<100;a++)
	{
		if (a%2!=0)
		{
		sum=sum+a;
			
		}
	}
	cout<<sum;
	return 1;
}
