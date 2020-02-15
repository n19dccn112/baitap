#include <iostream>
using namespace std;
int main ()
{
	cout <<" nhap n";
	int i,n,t=0;
	cin>>n;
	for (i=2;i<n;i++)
	{
		if (n %i ==0)
		t=t+1;
	}
	if (t != 0)
	cout<<n<<" khong la so nguyen to";
	else
	cout<<n<<" la so nguyen to";
	return 1;
	
}
