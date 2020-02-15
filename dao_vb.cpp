#include <iostream>
#include <string.h>//ho tro cho char ~ string
#include <string>// string
using namespace std;
int main ()
{
/*	int  sum=0;*/
	cout<<" nhap van ban "<< endl;
	char a[100],b[100];
	cin.getline(a,101);
	strcpy(b,strrev(a));// strrev la dao chuoi a, sau do copy chuoi a vao chuoi b (char khong duoc gan bang dau =   )
/*	for(int i=0; i<100;i++)
	{
	if(a[i]=='\0')
		{
			break;
		}
		else
			sum=sum+1;
	}
		for(int i=0;i<sum;i++)
		{
		b[sum-i]=a[i];
		}*/
		
		cout<<b;
		return 1;
}
