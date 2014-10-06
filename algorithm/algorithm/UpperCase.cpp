#include<iostream>
using namespace std;
void UpperCase(char *str)
{
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if((str[i]>='a') && (str[i]<='z'))
		{
			str[i] -=('a'-'A');
			//str++;
		}
	}
	for(int j=0;j<len;j++)
	{
		cout<<str[j];
	}
}