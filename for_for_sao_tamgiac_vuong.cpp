#include <iostream>
using namespace std;
int main ()
{
	cout<<" canh goc vuong tam giac vuong la: ";
	int n;
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		for (int j=1;j<=(n-i);j++)
		{
		cout<<"  ";
		}
		for( int a=1 ;a<=i;a++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}
