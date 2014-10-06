#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int n)
	/*arr是一个有序数组*/
{
	int mid=0;
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==arr[mid])
		{
			return arr[mid];
		}
		else if(key < arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
	
}