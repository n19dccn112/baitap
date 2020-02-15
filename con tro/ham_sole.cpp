#include <iostream>
using namespace std;
void input ( float *mang,int n);
float sole (float *mang, int n);
int main()
{
	int n;
	cout<<" Nhap so phan tu can kiem tra ";
	cin>>n;
	float *mang = new float [n];
	input (mang, n);
	sole (mang, n);
	return 0;
}
void input (float *mang,int n)
{
	for (int i =0 ; i<n; i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<" : ";
		cin>> *(mang +i);
		cout <<endl;
	}
}
float sole (float *mang, int n)
{
	int dem=0;
	for (int i=0; i<n; i++)
	{
		if ( int (*(mang+i))% 2 != 0)
		dem = dem +1;
	}
	cout <<" so so le la: "<<dem;
	return dem;
}
