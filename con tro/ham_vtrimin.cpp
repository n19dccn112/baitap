#include <iostream>
using namespace std;
void input (float *mang, int n);
float vtri( float *mang, int n);
int main ()
{
	int n;
	cout <<" nhap so cac so can ktr ";
	cin>>n;
	float *mang = new float [n];
	input (mang , n);
	cout<<vtri (mang,n);
	return 0;
}
void input (float *mang, int n)
{
	for( int i=0; i<n; i++)
	{
		cout<< " nhap phan tu thu: "<<i+1<<"   ";
		cin>> *(mang+i);
	}
}
float vtri( float *mang, int n)
{
	float min = *mang;
	int vitri =0;
	for( int i=0; i<n; i++)
	{
	if( min> * (mang+i))
	{
		min = *(mang+i);
		vitri = i;
	}	
	}
	return vitri;
}
