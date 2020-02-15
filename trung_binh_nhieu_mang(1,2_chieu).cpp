#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout<<" nhap so hoc sinh ";
	int shs;
	float dtoan[500],dvan[500],tb[500];
	char ten[500][100];
	cin>>shs;
	for(int i =0;i<shs;i++)
	{
		fflush(stdin);
		cout<<" nhap ten hoc sinh thu "<<i+1<<": ";
		cin.getline(ten[i],101);
		cout<<"nhap diem mon van ";
		cin>>dvan[i];
		cout<<"  nhap diem mon toan ";
		cin>>dtoan[i];
		cout<<" diem trung binh ";
		tb[i]=(dvan[i]+dtoan[i])/2;
		cout<<tb[i]<<endl;
	}
	return 1;
}
