#include <iostream>
#include <string.h>
void chuanhoa(char a[], int n);
void input(char a[][100],int n);
using namespace std;
int main ()
{
	int k;
	char chuoi[100][100];
	cout<<" nhap so chuoi can chuan hoa: ";
	cin >>k;
	input (chuoi,k);
	for(int i=0; i<k; i++)
	{
		chuanhoa(chuoi[i],strlen(chuoi[i]));
	}
	cout<<endl;
	return 0;
}
void input(char a[][100],int n)
{

	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		cout<<" chuoi thu "<<i+1<<" la: ";
		cin.getline(a[i],101);
	}
}
void chuanhoa(char a[], int n)
{

		
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
}	
