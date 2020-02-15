#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main ()
{
	cout<<" nhap chuoi ";
	char a[100];
	cin.getline(a,101);
	int b;
	strcpy(a,strrev(a));
	b=atoi(a);
	cout<<" in chuoi nguoc " <<b;
	return 1;
}
