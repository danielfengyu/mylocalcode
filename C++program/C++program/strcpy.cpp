#include<iostream>
#include<cassert>
using namespace std;
/*
已知strcpy 函数的原型是
char *strcpy(char *strDest, const char *strSrc);
其中strDest 是目的字符串，strSrc 是源字符串。
（1）不调用C++/C 的字符串库函数，请编写函数 strcpy
*/
char * strcpy(char *strDest,char * strSrc)
{
	assert((strDest!=NULL) && (strSrc != NULL));
	char *address=strDest;
	while((*strDest!='\0') && (strSrc != '\0'))
	{
		*strDest=*strSrc;
		strDest++;
		strSrc++;
	}
	return address;
}
/*char *strcpy(char *strDest, const char *strSrc);
{
    assert((strDest!=NULL) && (strSrc !=NULL)); // 2分
    char *address = strDest; // 2分
    while( (*strDest++ = *strSrc++) != '\0' ) // 2分
         NULL ;
    return address ; // 2分
}*/
