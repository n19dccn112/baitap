#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main ()
{
	cout<<"nhap so ";
	int a;
	cin>>a;
	char b[100];
	itoa(a,b,10);
	strcpy(b,strrev(b));
	a=atoi(b);
	cout<<a;
	return 1;
}
