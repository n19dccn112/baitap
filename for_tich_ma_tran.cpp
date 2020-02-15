#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int d1,d2,c1,c2;
	cout<<" so dong ma tran A la: ";
	cin>>d1;
	cout<<"so cot ma tran A la: ";
	cin>>c1;
	cout<<"so dong ma tran B la: ";
	cin>>d2;
	cout<<" so cot ma tran B la: ";
	cin>>c2;
	if (c1!=d2)
	{
		cout<<" khong xac dinh ";
	}
	else
	{
	int mtr1[100][100],mtr2[100][100],mtr3[100][100];
	mtr3[0][0]=0;
	for( int i=0;i<d1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<" phan tu a"<<i<<j<<" la: ";
			cin>>mtr1[i][j];
		}
		cout<<endl;
	}
	for( int i=0;i<d2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<" phan tu a"<<i<<j<<" la: ";
			cin>>mtr2[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<d1;i++)
	{
		for( int j=0;j<c2;j++)
		{
			mtr3[i][j]=0;
			for(int k=0;k<d2;k++)
				{
				mtr3[i][j]=mtr3[i][j]+mtr1[i][k]*mtr2[k][j];
				}	
				cout << setw(5)<<mtr3[i][j];		
		}
		cout<< endl;
	}
	}
	return 0;
}
