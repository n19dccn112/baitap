#include <iostream>
using namespace std;
int main ()
{
	cout<<"liet ke uoc so le cua so ";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2!=0)
			{
				cout<<i<<" ";
			}
		}
	}
	return 1;
}
