#include<iostream>
#include"huawei.h"
#define N 1000
using namespace std;
int main()
{
	int a,num[N];
	int i=0;
	char ch;
	while(cin>>a)
	{
		num[i]=a;
		if(cin.get()=='\n')
			break;
		i++;
	}
	for(int j=0;j<=i;j++)
		cout<<num[j]<<' ';
	system("pause");
	return 0;
}