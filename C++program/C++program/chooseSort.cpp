#include<iostream>
using namespace std;
void chooseSort(int arr[],int n)
{
	int k=0;
	for(int i=1;i<n;i++)
	{
		k=i-1;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[k])
			{
				k=j;
			}
		}
		if(k != i-1)
		{
			int temp=arr[i-1];
			arr[i-1]=arr[k];
			arr[k]=temp;
		}
	}
}