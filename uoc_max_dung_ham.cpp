#include <iostream>
using namespace std;
bool uoc(int n,int i);
int main ()
{
	cout<<"tim uoc max cua ";
	int n,i,max=0;
	cin >>n;
	for(i=1;i<n;i++)
	{
		if(uoc(n,i)==true)
	{
		if(i>max)
		max=i;
	}	
	}

	cout<< "uoc max la "<<max;
	return 1;
}
bool uoc(int n,int i)
{
	if(n%i==0)
	return true;
	else
	return false;
}

