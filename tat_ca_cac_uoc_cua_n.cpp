#include <iostream>
using namespace std;
int main ()
{
	cout <<"tat ca uoc so cua n la ";
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		cout<<i<<" ";
	}
	}
	return 1;
}
