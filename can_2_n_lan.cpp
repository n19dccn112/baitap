#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout <<" nhap so lan can ";
	int n;
	float can=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
     can=sqrt(2+can);
	}
	cout<<"ket qua bai toan la "<<can;
	return 1;
}
