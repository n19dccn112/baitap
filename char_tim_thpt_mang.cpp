#include <iostream>
using namespace std;
int main ()
{
	bool cohieu=false;
	char a[100];
	cout<< " nhap van ban ";
	cin.getline(a,101);
	for(int i=0;i<97;i++)// tru 3 ki tu cong them i+3
	{
		if(a[i]=='t'&& a[i+1]=='h'&& a[i+2]=='p'&& a[i+3]=='t')
		{
			cohieu=true;
			break;
		}
	}
	if(!cohieu)//!cohieu tuong duong (cohieu==false)
	cout<<" ko xuat hien'thpt' ";
	else
	cout<<" xuat hien 'thpt' ";
	return 1;
}
