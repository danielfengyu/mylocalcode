#include<iostream>
using namespace std;
#define INF 1000000
void column_min()
{
	int data[5][5];
	int min[5];
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>data[i][j];
	for(j=0;j<5;j++)
	{
		min[j]=INF;
		for(i=0;i<5;i++)
		{
			if(data[i][j]<min[j])
				min[j]=data[i][j];
		}
	}
	for(int k=0;k<5;k++)
	{
		cout<<min[k]<<' ';
	}
}