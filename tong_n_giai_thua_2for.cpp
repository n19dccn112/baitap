#include <iostream>
using namespace std;
int main ()
{
	cout<<"tinh tong tich n so n = ";
	int n;
	double gthua=1,sum=0;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		gthua=1;
		for(int a=1;a<=i;a++)
		{
			gthua=gthua*a;
			
		}
		sum=sum+gthua;		
	}
	cout<<sum;
	return 1;
	
}

 

