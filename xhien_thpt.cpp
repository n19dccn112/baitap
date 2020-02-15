#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	char a[100];
	cout<<" nhap van ban ";
	cin.getline(a,101);
	for(int i=0;i<97;i++)
	{
		if(a[i]=='t'&& a[i+1]=='h'&& a[i+2]=='p'&& a[i+3]=='t')
		{
			sum= sum+1;
		}
	}
	cout<<" 'thpt' xuat hien " <<sum<<" lan";
	return 1;
}
