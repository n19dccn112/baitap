#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int mtr[100][100],d,c;
	cout<<" nhap so dong ma tran ";
	cin>> d;
	cout<<" nhap so cot ma tran ";
	cin>> c;
	for (int i=0;i<d;i++)
	{
		for( int j=0;j<c;j++)
		{
			cout<<" nhap phan tu thu a["<<i+1<<"]["<<j+1<<"]  ";
			cin>>mtr[i][j];
		}
	}
	int det;
	if (d==2 && c==2)
}for (int j=0;j<c;j++)
	{
		for( int i=0;i<d;i++)
		{
			cout<<setw(5)<<mtr[i][j];
		}
		cout<<endl;
	}
