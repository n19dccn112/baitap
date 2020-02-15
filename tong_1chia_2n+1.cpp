#include <iostream>
using namespace std;
int main()
{
	cout<<"nhap so n";
	int n;
	cin >>n;
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+1/(float)(2*i+1);
	}
	cout <<"tong 1/(2n+1) la "<<sum;
	return 1;
}
