#include <iostream>
#include <iomanip>
using namespace std;
void input (float *mang, int n);
float demmax (float *mang, int n);
//void sapxep (float *mang, int n);
//float output (float *mang, int n);
int main ()
{
	int n;
	cout<<"nhap vao mang n so nguyen : ";
	cin>>n;
	float *mang = new float [n];
	int dem=0, max=0, phu1, phu2, phu;
	input (mang,n);
	demmax(mang,n);
//	sapxep (mang,n);
//	output (mang,n);
	return 0;
}
void input (float *mang, int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap so thu "<<i+1<<":  ";
		cin>>*(mang+i);
	}
}
float demmax (float *mang, int n)
{
	int max=0, phu1, phu2;
	for (int i=0; i<n;i++)
	{
		int dem=0;
		for(int j=i; j<n;j++)
		{
			if (*(mang+i)=*(mang+j))
			{
				dem=dem +1;
				phu1 =dem;
			}
		}
		if(phu1 >max)
		{
			phu2=max ;
			max=phu1 ;
		}
		
	}
	cout <<max;
	return max;
}
/*void sapxep (float *mang, int n)
{
	int phu;
	for (int i=0; i<n; i++)
	{
		for (int j=n-1; j>=i; j--)
		{
			if( *( mang+j)> *(mang+j-1))
			{
				phu= *(mang +j-1);
				*(mang + j-1)=*(mang +j);
				*(mang + j)=phu;
			}
		}
	}
}
float output (float *mang, int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<*(mang +i);
	}
	return *mang;
}*/

