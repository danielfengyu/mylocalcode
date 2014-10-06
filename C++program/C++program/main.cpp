#include<iostream>
#include"chooseSort.h"
#include<Windows.h>
using namespace std;

/*DWORD WINAPI Fun(LPVOID lpParamter)
{    
      while(1) { cout<<"Fun display!"<<endl; Sleep(1000);}
}*/
int main()
{
	
	/*int arr[10];

	for(int i=0;i<10;i++)
		cin>>arr[i];
	shellSort(arr,10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<' ';*/
		/*HANDLE hThread = CreateThread(NULL, 0, Fun, NULL, 0, NULL);
		 CloseHandle(hThread);
      while(1) { cout<<"main display!"<<endl;  Sleep(2000);}*/
	int a[5]={1,2,3,4,5};
	cout<<*(a+1)<<endl;
	system("pause");
	return 0;
}