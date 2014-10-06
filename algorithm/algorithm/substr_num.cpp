#include<iostream>
using namespace std;
/*
1)写出在母串中查找子串出现次数的代码.
*/
int count(char * str,char *substr)
{
	int count=0;
	//如果子串的长度比主串的长度小 返回-1
	char *s1;
	char * s2;
	if(strlen(str)<strlen(substr))
	{
		return -1;
	}
	while(*str != '\0')
	{
		s1=str;
		s2=substr;
		while((*s1==*s2) && (*s1 != '\0') && (*s2 != '\0'))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			count++;
			str+=strlen(substr);
		}
		else{
			str++;
		}
	}
	return count;
}