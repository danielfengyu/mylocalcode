#include<iostream>
using namespace std;
/*
1)д����ĸ���в����Ӵ����ִ����Ĵ���.
*/
int count(char * str,char *substr)
{
	int count=0;
	//����Ӵ��ĳ��ȱ������ĳ���С ����-1
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