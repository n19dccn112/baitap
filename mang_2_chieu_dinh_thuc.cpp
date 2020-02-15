#include<iostream>
using namespace std;
int main()
{
	float matran[3][3];
	cout<<" nhap ma tran ";
	for( int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
		cin>>matran[i][j];	
		}
		cout<< endl;
	}
	float dthuc;
	dthuc=1.0*(matran[0][0]*matran[1][1]*matran[2][2]+matran[0][1]*matran[1][2]*matran[2][0]+matran[1][0]*matran[2][1]*matran[0][2])-1.0*(matran[0][2]*matran[1][1]*matran[2][0]+matran[1][0]*matran[0][1]*matran[2][2]+matran[2][1]*matran[1][2]*matran[0][0]);
	cout<<" dinh thuc ma tran nay la: ";
	cout<<dthuc;
	return 0;
	}

