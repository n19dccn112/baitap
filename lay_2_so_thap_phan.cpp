#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float bkinh,pi=3.145926,s,p;
	cin>>bkinh;
	// lay 2 so thap phan sau dau phay
	cout<<"chu vi hinh tron la ";
	cout<<fixed<<setprecision(2)<<2*bkinh*pi<<endl;
	cout<<"dien tich hinh tron la ";
	cout<<fixed<<setprecision(2)<<bkinh*bkinh*pi;
	return 0;
}
