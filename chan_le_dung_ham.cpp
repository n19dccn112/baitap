#include <iostream>
using namespace std;
bool chan(int n);
bool uoc(int a,int n);
int main ()
{
 cout<<"tat ca uoc le cua so ";
 int i,n;
 cin>>n;
 for( i=1;i<=n;i++)
     {
     	if(uoc(n,i)==true)
     	{
     		if(chan(i)==false)
     		cout<<i<<" ";
		 }
	 }	
}
bool chan(int n)
{
	if (n%2==0)
		return true;
		else 
		return false;
}
bool uoc(int a,int n)
{
	if(a%n==0)
	return true;
	else
	return false;
}
