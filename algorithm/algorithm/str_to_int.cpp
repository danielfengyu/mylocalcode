#include<iostream>
using namespace std;
int str_to_int(char str[])
{
	int len=strlen(str);
	int num=0;
	int flag=0;
	int i= 0;
	if(str[0]=='-')
	{
		flag=1;
		i=1;
	}
	for(int j=i;str[j] != '\0';j++)
	{
		num=num*10+(str[j]-'0');
		cout<<num<<endl;
	}
	if(flag)
	{
		num=num*(-1);
	}
	return num;
}