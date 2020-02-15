#include <iostream>
using namespace std;
int main ()
{
	for( int i =1;i<=10;i++)
	{
		for( int j =2;j<=9;j++)
		{
			cout << j<<"x"<< i<<" = "<<i*j;
			cout<<endl;
		}
		cout<< endl<<endl;
	}
	return 0;
}

