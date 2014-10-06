#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;
int partition(int arr[],int start,int end)
{
	int piviot=arr[start];
	int left=start;
	int right=end;
	//获取一个随机下标，把该下标的元素作为标兵元素
	/*srand((unsigned)time(NULL));
	int ele_num=rand()%(end-start)+1;
	piviot=arr[ele_num];
	//交换标兵元素到第一个位置
	cout<<piviot<<endl;
	int temp=arr[start];
	arr[start]=piviot;
	arr[ele_num]=temp;*/
	//cout<<temp;
	while(left<=right)
	{
		while(left<=right && arr[left]<=piviot)
			left++;
		while(left<=right && arr[right]>piviot)
			right--;
		if(left<right)
		{
			swap(arr[left],arr[right]);
			left++;
			right--;
		}
	}
	swap(arr[start],arr[right]);
	return right;

}

void swap( int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}

void quicksort(int arr[],int start,int end)
{
	if(start<end){
		int part=partition(arr,start,end);
		quicksort(arr,start,part-1);
		quicksort(arr,part+1,end);
	}
}