#include <iostream>
#include <string.h>
void mang(char a[][100]);
void test(char a[][100]);
void dao(char a[][100], char b[][100]);
using namespace std;
int n;
int main ()
{
/*	cout<<" so chuoi can ktra bang: ";
	cin>> n;
	char a[100][100], b[100][100];
	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		cout<<" chuoi thu "<<i+1<<" la: ";
		cin.getline(a[i],101);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<97; j++)
		{
			if(a[i][j]=='t' && a[i][j+1]=='o' && a[i][j+2]=='a' && a[i][j+3]=='i')
			{
				cout<<a[i]<<endl;
			}
		}
	}
	for( int i=0; i<n; i++)
	{
	
		strcpy(b[i],a[i]);
		//cout<<a[i]<<"  99  "<<endl;
		//cout<<b[i]<<"  00  "<<endl;
		if(!strcmp(strrev(a[i]),b[i]))
		{
		cout<<b[i];
		}
	}
	return 0;*/
		cout<<" so chuoi can ktra bang: ";
		cin>> n;
		char a[100][100],b[100][100];
		mang(a);
		cout<<endl;
		test(a);
		cout<<endl;
		dao(a,b);
		return 0;
}
void mang(char a[][100])
{

	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		cout<<" chuoi thu "<<i+1<<" la: ";
		cin.getline(a[i],101);
	}
}
void test(char a[][100])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<97; j++)
		{
			if(a[i][j]=='t' && a[i][j+1]=='o' && a[i][j+2]=='a' && a[i][j+3]=='i')
			{
				cout<< a[i];
			}
		}
	}
}
void dao(char a[][100], char b[][100])
{
for( int i=0; i<n; i++)
	{
		strcpy(b[i],a[i]);
		if(!strcmp((strrev (a[i])),b[i]))
		{
		cout<<b[i];
		}
	}	
}

