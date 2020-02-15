#include <iostream>
using namespace std;
int main()
{
	cout<<"nhap n de tinh tong n= ";
	int n;
	cin>> n;
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+1/(float)i*(i+1);
	}
	cout<< sum;
	return 1;
}
