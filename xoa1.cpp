#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout << " nhap 2 so ";
	cin>>a>>b;
	cout<<" ket qua a+b : "<<a+b<<endl;
	cout<<" ket qua a-b : "<<a-b<<endl;
	cout<<" ket qua a*b : "<<a*b<<endl;
	if (b!=0)
	{
	cout<<" ket qua a/b : "<<a/b<<endl;
}
	else
	{
	cout<<" khong chia duoc"<<endl;
	}
	cout<<" ket qua a%b : "<<a%b;
	return 0;
	}
