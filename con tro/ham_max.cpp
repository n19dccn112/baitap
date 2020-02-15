#include <iostream>
using namespace std;
void input (float *mang, int n);
float max ( float *mang, int n);
int main ()
{
	int n;
	cout <<" nhap so cac so can ktra: ";
	cin >> n;
	float *mang = new float [n];
	input (mang, n);
	max (mang, n);
	cout << max(mang, n);
	return 0;
}
void input (float *mang, int n)
{
	for( int i=0 ; i<n; i++)
	{
		cout<<" nhap phan tu thu "<<i+1<<" : ";
		cin>> *( mang + i);
		cout<<endl ;
	}
}
float max ( float *mang, int n)
{
	float max= *mang;
	for( int i=0; i<n; i++)
	{
		if(max<*(mang+i))
		{
			max = *(mang+i);
		}
	}
	return max;
}

