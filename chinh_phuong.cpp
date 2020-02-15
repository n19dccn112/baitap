#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int cohieu=0;
	cout<< "nhap so can kiem tra ";
	float n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if (sqrt(n)==i)
		{
			cohieu=1;
			cout<<n<<" la so chinh phuong";
		}
	}
	if(cohieu==0)
		cout<<n <<" ko la so chinh phuong";
	return 1;
}

