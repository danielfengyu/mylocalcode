#include<iostream>
using namespace std;

/*********************************************************
*138。编写一个 C 函数，该函数在一个字符串中找到可能的最长的
*子字符串，且该字符串是由同一字符组成的。
***********************************************************/


void longestSameChar(char *str)
{
	int count=1;
	int max_long=1;
	int len=strlen(str);
	int i,j,num=0;
	char*temp;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[j-1]==str[j])
				count++;
			else
				break;
		}
		cout<<count<<' ';
		
		if(count>max_long)
		{
			max_long=count;
			temp=&str[i];
			//i=max_long+i-1;
		}
		if(count==max_long)
		{
			num++;
		}
		i=count+i-1;//跳过i个字符
		count=1;//重新计数
	}
	for(int m=0;m<max_long;m++)
	{
		cout<<*temp++;
	}
	/*while(num)//处理多个满足条件的字符串
		{
			temp=temp+4;
			for(int n=0;n<max_long;n++)
			{
				cout<<*temp++;
			}
			num--;
		}*/
}