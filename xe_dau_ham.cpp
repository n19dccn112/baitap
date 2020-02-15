#include<iostream>
using namespace std;
float dau(float a,float b);
int main()
{
float a,b;
cout<< " nhap 2 so "<<endl;
cin>>a>>b;
if ( dau(a,b)==-1)
cout<<" 2 so khac dau ";
if ( dau(a,b)==1)
cout<<" 2 so cung dau ";
if(dau(a,b==0))
cout<<" khong cung hay khac dau ";
return 1;
}
float dau(float a,float b)
{
	if(a*b<0)
	return -1;
	if(a*b>0)
	return 1;
	return 0;
}
