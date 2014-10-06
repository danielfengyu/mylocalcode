#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int low,int high)
{
	int mid=0;
	if(low > high)
	{
		return -1;
	}
			mid=(low+high)/2;
			if(key==arr[mid])
				return arr[mid];
			else if(key < arr[mid])
			{
				return(binarysearch(arr,key,low,mid-1));
			}
			else
			{
				return(binarysearch(arr,key,mid+1,high));
			}
}