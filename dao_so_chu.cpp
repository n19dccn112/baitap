#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main ()
{
	int a=2011;
	char b[10];
	itoa(a,b,10);
	strcpy(b,strrev(b));
	cout<<b;
	return 1;
	
}
