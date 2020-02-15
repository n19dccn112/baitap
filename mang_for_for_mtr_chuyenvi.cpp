#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int mtr[100][100],mtrt[100][100], mtrn[100][100],d,c;
	cout<<" nhap so dong ma tran ";
	cin>> d;
	cout<<" nhap so cot ma tran ";
	cin>> c;
	for (int i=0;i<3;i++)
	{
		for( int j=0;j<3;j++)
		{
			cout<<" nhap phan tu thu a["<<i+1<<"]["<<j+1<<"]  ";
			cin>>mtr[i][j];
		}
		cout<<endl;
	}
	for (int i=0;i<3;i++)
	{
		for( int j=0;j<3;j++)
		{
		mtrt[i][j]	= mtr[j][i];
		cout<<setw(5)<<mtrt[i][j];
		}
		cout<<endl;
	}
	int dthuc;
	if(d!=c)
	cout<<" k co ma tran nghich dao ";
	else
	{
	dthuc=1.0*(mtr[0][0]*mtr[1][1]*mtr[2][2]+mtr[0][1]*mtr[1][2]*mtr[2][0]+mtr[1][0]*mtr[2][1]*mtr[0][2])-1.0*(mtr[0][2]*mtr[1][1]*mtr[2][0]+mtr[1][0]*mtr[0][1]*mtr[2][2]+mtr[2][1]*mtr[1][2]*mtr[0][0]);
	cout<<" dinh thuc ma tran nay la: "<<dthuc;
	}
	cout<<" ma tran nghich dao la: "<<endl;
	for (int i=0;i<3;i++)
	{
		for( int j=0;j<3;j++)
		{
		mtrn[i][j]=mtrt[i][j]*dthuc;
		cout<<setw(5)<<mtrn[i][j];		
		}
		cout<<endl;
	}
	return 1;
}
