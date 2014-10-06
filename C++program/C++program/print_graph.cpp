#include<iostream>
using namespace std;
void print_graph(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<'*';
			for(int k=1;k<i;k++)
			{
				cout<<'.';
			}
		}
		cout<<endl;
	}
}