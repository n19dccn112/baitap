#include <iostream>
using namespace std;
double gthua(int a);
int main ()
{
	cout<<"tinh tong tich n so n = ";
	int n;
	double sum=0;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+gthua(i);	
	}
	cout<<sum;
	return 1;
	
}

 double gthua(int a)
 {
 	double tich=1;
 	for (int i=1;i<=a;i++)
 	{
 		tich=tich*(double)i;
	} 
	 return tich;
 }

