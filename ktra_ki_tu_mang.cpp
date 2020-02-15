#include <iostream>
using namespace std;
int main()
{
	char a[5];
	for(int i=0;i<5;i++)
	{
	    cout<<" nhap ki tu thu "<<i+1<<" ";
		cin>>a[i];
		if(a[i]=='A' || a[i]=='a')
		{
			cout<<"\n" <<a[i]<<" co ki tu 'a' xuat hien "<< endl;
		}
		else
		{
			cout<< a[i]<<" khong xuat hien ki tu 'a' "<< endl;
		}
	}
	return 1;
}
