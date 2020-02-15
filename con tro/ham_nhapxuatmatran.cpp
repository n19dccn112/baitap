#include <iostream>
#include <iomanip>
void input (float **mang, int d, int c );
void out (float **mang, int d, int c );
using namespace std;
int main ()
{
int d,c;
cout<<" nhap so dong: ";
cin>>d;
cout<<" nhap so cot: ";
cin>>c;
float **mang = new float *[d];
for(int i=0;i<d;i++)
{
	mang[i]=new float [c];
}
input (mang , d, c);
out( mang,d,c);
return 0;	
}
void input (float **mang, int d, int c )
{
	for ( int i=0; i<d; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout<<" nhap phan tu mang thu ["<<i<<"]["<<j<<"] : ";
			cin>> mang[i][j];
		}
	}
}
void out (float **mang, int d, int c )
{
	for ( int i=0; i<d; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout<<setw(5)<< mang[i][j];
		}
		cout <<endl;
	}
}
