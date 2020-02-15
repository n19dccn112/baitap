#include <iostream>
using namespace std;
int main()
{
	cout<<" nhap chieu dai ";
	int d,r;
	cin>>d;
	cout<<" nhap chieu rong ";
	cin>>r;
	for(int i=1;i<=d;i++)
	{
		cout<<" *";
	}
	cout<<endl;
	for (int j=1; j<r-1;j++)
	{
		for(int i=1;i<=d;i++)
		{
			if(i==1 || i==d)
			cout<<" *";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
		for(int i=1;i<=d;i++)
	{
		cout<<" *";
	}
	return 0;
}
