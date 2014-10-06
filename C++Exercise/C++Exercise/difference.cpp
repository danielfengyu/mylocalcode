#include<iostream>
using namespace std;
void sort(int * data,int n);
void difference(int data1[],int data2[])
{
	int len1=sizeof(data1)/sizeof(int);
	int len2=sizeof(data2)/sizeof(int);
	int *data=new int[len1+len2];
	for(int i=0;i<len1;i++)
		data[i]=data1[i];
	for(int j=len1;j<len1+len2;j++)
		data[j]=data[j-len1];
	for(int k=0;k<len1+len2;k++)
		cout<<data[k]<<' ';
	sort(data,len1+len2);
	
}

void sort(int * data,int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=1;j<n-i;j++)
		{
			if(data[j-1]>data[j])
			{
				int temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}