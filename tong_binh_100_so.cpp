#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
	cout<<"tinh tong 100 so a^ = ";
	int a;
	int tong=0;
	cin >>a;
	for(int i=1;i<=a;i++)
	{
		tong=tong+pow(i,2);
	}
	cout << tong;
	return 1;
}
