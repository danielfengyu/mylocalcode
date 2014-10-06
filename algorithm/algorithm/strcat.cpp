#include<iostream>
using namespace std;
char * strcat(char *strDest,char *strSrc)
{
	char* chs=strDest;
	while(*chs)
	{
		chs++;
	}
	while(*strSrc)
	{
		*chs++=*strSrc++;
	}
	return strDest;
}