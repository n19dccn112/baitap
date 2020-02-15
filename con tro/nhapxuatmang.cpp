#include <iostream>
using namespace std;
int main()
{
	cout<<" nhap vao do dai mang ";
	int n;
	cin>>n;
	int *a = new int [n];
	cout<<" nhap cac phan tu "<<endl;
	for( int i=0; i<n; i++)
	{
		cin>> *(a+i);
	}
	for( int i=0; i<n; i++)
	{
		cout<<*(a+i)<<endl;
	}
	return 0;
}
