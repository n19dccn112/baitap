#include <iostream>
using namespace std;
int main ()
{
	cout<<"n! can tinh n=";
	int n;
	int gthua =1;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		gthua = gthua*i;
	}
	cout << "giai thua bang"<<gthua;
	return 1;	
}
