#include<iostream>
using namespace std;

void shellSort(int arr[],int n)
{
	int d=n/2;
	while(d>=1)
	{
		for(int i=0;i<d;i++)
		{
			for(int j=i+d;j<n;i+=d)
			{
				int temp=arr[j];
				int k=j-d;
				while((arr[k]>temp) && (k>=i))
				{
					arr[k+d]=arr[k];
					k-=d;
				}
				arr[k+d]=temp;
			}
		}
		d=d/2;
	}
}