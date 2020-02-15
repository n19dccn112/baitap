#include <iostream>
using namespace std;
int main ()
{
	cout <<"tim uoc lon nhat cua ";
	int n,max=0;
	cin >>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			if(i>max)
			max=i;
			
		}
	}
	cout<<"uoc lon nhat la "<<max;
	return 1;
}
