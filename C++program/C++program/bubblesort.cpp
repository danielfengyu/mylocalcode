#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n;i++)//i从1开始，因为下面的j+1先到数组末尾。
		//也可以从0开始，但下面的循环的结束标志应该是n-i-1;
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}