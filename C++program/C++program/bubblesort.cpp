#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n;i++)//i��1��ʼ����Ϊ�����j+1�ȵ�����ĩβ��
		//Ҳ���Դ�0��ʼ���������ѭ���Ľ�����־Ӧ����n-i-1;
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