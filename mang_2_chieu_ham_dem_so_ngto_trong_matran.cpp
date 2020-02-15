#include <iostream>
bool uoc( int n);
using namespace std;
int main()
{
	int d,c, mt[10][10],dem=0;
	cout<< " so hang trong ma tran ";
	cin>> d;
	cout<< " so cot trong ma tran ";
	cin>> c;
	for( int i=0;i<d;i++)
	{
		for( int j =0; j<c;j++)
		{
			cout<<" nhap vao ma tran dong "<<i+1<<" cot "<< j+1<<" ";
			cin>>mt[i][j];
		}
		cout<< endl;
	}
	for( int i=0;i<d;i++)
	{
		for( int j =0; j<c;j++)
		{
		if(uoc(mt[i][j])==true)
			dem=dem+1;
		}
		cout<< endl;
	}
	cout<<" so so nguyen to trong ma tran "<<dem;
	return 0;
}
bool uoc( int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			dem=dem+1;
		}
	}
	if(dem==2)
	return true;
	else
	return false;
}
