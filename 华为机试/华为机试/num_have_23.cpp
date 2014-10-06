#include<iostream>
using namespace std;
#define N 100
void num_have_23()
{
	int num[10];
	int sort[10];
	int n,i=0,k=0;
	int temp;
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	cin>>n;
	for(int j=0;j<i;j++)
	{
		temp=num[j];
		while(temp>0){
			if(temp%100==n)
			{
				sort[k]=num[j];
				k++;
			}
			temp=temp/10;
		}
	}
	for(int t=0;t<k-1;t++)
	{
		for(int m=0;m<k-1-t;m++)
		{
			if(sort[m]>sort[m+1])
			{
				temp=sort[m+1];
				sort[m+1]=sort[m];
				sort[m]=temp;
			}
		}
	}
	for(int l=0;l<k-1;l++)
	{
		cout<<sort[l]<<' ';
	}
	cout<<endl;
}