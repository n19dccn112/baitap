#include <iostream>
using namespace std;
int thang []={31,28,31,30,31,30,31,31,30,31,30,31};
int main ()
{
	cout <<" nhap ngay sinh ";
	int a,b,c,sum=0;
	cin >>a;
	cout<< " nhap thang sinh ";
	cin>>b;
	cout<<" nhap nam sinh ";
	cin>>c;
    if(c%4==0)
   	{
      thang[1]=29;
    }
    for(int i=1;i<b;i++)
    {
    sum=sum+thang[i];	
	}
	sum=sum+a;
	cout<<" ngay sinh cua ban la ngay thu "<< sum<<" trong nam";
	return 1;
}
