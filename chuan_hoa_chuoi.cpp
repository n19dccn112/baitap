#include <iostream>
#include<string.h>
using namespace std;
int main ()
{
	cout<<" chuoi can chuan hoa ";
	char a[100];
	cin.getline(a,101);
/*strlen(a);  ra ve so luong ki tu thuc co trong mang a*/
	while(a[0]==' ')
	{
	for(int i=0;i<strlen(a);i++)
	{
		a[i]=a[i+1];
	}
	}
	while(a[strlen(a)-1]==' ')
	{
		a[strlen(a)-1]='\0';
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' '&&a[i+1]==' ')
		{
			for(int j=i;j<=strlen(a);j++)
			{
				a[j]=a[j+1];
			}
			i--;
		}
	}
	cout<<"["<<a<<"]";
	return 1;
}
