#include <iostream>
using namespace std;
void input (float *mang, int n);
float demso (float *mang, int n);
float output (float *mang, int n);
int main ()
{
	int n;
	cout<<" nhap so luong so can ktra: ";
	cin>> n;
	float *mang = new float [n];
	int  vtricuoi, vtridau, max=0, dem;
	input (mang,n);
	demso (mang,n);
	output(mang,n);
	return 0;
}
void input (float *mang, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" so thu : ";cin>> *(mang+i);
		cout<<endl;
	}
}
float demso (float *mang, int n)
{
	int vtricuoi, vtridau, max=0, dem, vtri1;
	for (int i=0;i<n;i++)
	{
	if(*(mang+i)>0)
	{
		vtridau = i;
		for (int j=i;j<n;j++)
		{
			if(*(mang+j)<=0)
			{
				vtricuoi =j;
				dem=vtricuoi-vtridau;
				break;
			}	
		}
	}
		if (max<dem)
		{
			max=dem;
		}
	}
	cout <<max;
	cout<<endl;
	return max;
}
float output (float *mang, int n)
{
	int vtricuoi, vtridau, max=0, dem, vtri1;
	for (int i=0;i<n;i++)
	{
	if(*(mang+i)>0)
	{
		vtridau = i;
		for (int j=i;j<n;j++)
		{
			if(*(mang+j)<=0)
			{
				vtricuoi =j;
				dem=vtricuoi-vtridau;
				break;
			}	
		}
	}
		if (max<dem)
		{
			max=dem;
			vtri1 =vtridau;
		}
	}
	for (int a= vtri1; a<vtri1+max;a++ )
	{
		cout<<"so "<<*(mang +a )<<endl;
	}
	return *mang ;
}


