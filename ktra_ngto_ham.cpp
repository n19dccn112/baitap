#include <iostream>
using namespace std;
bool ngto(int n);
int main ()
{
cout <<"so can kiem tra la ";
int n;
cin >>n;
if(ngto(n)==false)
cout<< n<<" la so ngto ";
return 1;	
}
bool ngto(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
	 return true;
    }
    return false;
}
