#include <iostream>
using namespace std;
int main ()
{
	cout <<"tong 1/n so la ";
	float sum=0;
	int n;
	cin>> n;
	for (int i=1;i<=n;i++)
	{
		sum=sum+1/(float)i;
	}
	cout<<sum;
	return 1;
}
