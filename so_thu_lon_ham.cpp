#include<iostream>
using namespace std;
float lon(float a, float b , float c);
int main()
{
	cout<<" tim so thuc lon nhat trong 3 so "<<endl;
	float a,b,c;
	cin>>a>>b>>c;
	cout<<" so lon nhat la "<<lon(a,b,c);
		return 1;
}
float lon(float a, float b, float c)
{
	if (a>=b&&a>=c)
	return a;	
	if ( b>=a&& b>=c)
	return b;
	return c;
}
