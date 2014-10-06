#include<iostream>
using namespace std;
/*
139。请编写一个 C 函数，该函数在给定的内存
区域搜索给定的字符，并返回该字符所在位置索引值。
*/
int searchChar(char * src,char ch)
{
	int i=1;
	/*for(i=0;i<n;i++)
	{
		if(src[i]==ch)
		{
			return i;
		}
	}*/
	while(*src)
	{
		if(*src!=ch)
		{
			i++;
			src++;
		}
		else
		{
			return i;
		}
	}
	return -1;
}