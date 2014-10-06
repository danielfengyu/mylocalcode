#include<iostream>
using namespace std;
void print_graphic(int n)
{
	int i=0,j=0,m;
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<=i;j++)
		{
			cout<<'*';
			for(m=0;m<i;m++)
				cout<<'.';
		}
		cout<<endl;
	}
}