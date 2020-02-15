#include <iostream>
#include <iomanip>
#include <math.h>
#define MAX 100
using namespace std;
void input(int **A,int n)
{
	
	
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cout << "Nhap phan tu ["<<i<<"]["<<j<<"] =";
			cin>>	A[i][j];
		}
	}
}
void out(int **A,int n)
{
	cout << endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			cout<<setw(5)<<	A[i][j];
		}
		cout << endl;
	}
	cout << endl;
}


int  **remove(int **A,int n,int index)
{
	int **temp = new int*[100];
	for(int i=0;i<MAX;i++)
	{
		temp[i] = new int[100];
		for(int j=0;j<MAX;j++)
		{
			
			temp[i][j]=0;	
		}
			
	}
	//cout <<"----------------";
	for(int i = 0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(j>=index)
				temp[i][j] = A[i][j+1];
			else
				temp[i][j] = A[i][j];
			temp[n-1][j] = 0;
		}
			
	}
	//out(temp,n-1);
	return temp;
}
int det(int **A,int n)
{
		out(A,n);
	if (n < 1)
		return 0;
	if(n == 1)
		return A[0][0];
	else if(n==2)
		return A[0][0]*A[1][1]-A[1][0]*A[0][1];
//	else if(n==3)
//		return det3(A);
	else
		{
			int sum = 0;
			for(int i=0;i<n;i++)
			{
				sum = sum + A[n-1][i]*(int)pow(-1,n+i+1)*det(remove(A,n,i),n-1);
			}
			
			return sum;
		
		}
	return -1;
}
int main()
{
	int n;
	int **A;
	A = new int*[MAX];
	for(int i=0;i<MAX;i++)
	{
		A[i] = new int[MAX];
		for(int j=0;j<MAX;j++)
		{
			A[i][j] = 0;
		}
	}
	
	
	cout << "Nhap vao canh cua ma tran:";
	cin >> n;
	input(A,n);
	//out(A,n);
	
	cout << "Dinh thuc cua ma tran tren ="<<det(A,n);
	return 0;
}
