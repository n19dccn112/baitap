#include <iostream>
using namespace std;
int main()
{
	int sum=0, n;
	cout<<"nhap so n ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+n^2;
	}
	cout<<sum;
	return 0;
}

