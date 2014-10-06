#include<iostream>
using namespace std;
/*
146.符串A和B,输出A和B中的最大公共子串。
比如A="aocdfe" B="pmcdfa" 则输出"cdf"
*/
char *commomstring(char *shortstring,char *longstring)
{  int i,j;

    char *substring= new char[256];

	if(strstr(longstring,shortstring)!=NULL)

		return shortstring;

	for(i=strlen(shortstring)-1;i>0;i--)

	{

	  for(j=0;j<=strlen(shortstring)-i;j++)

		{

		 memcpy(substring,&shortstring[j],i);//从下标j开始拷贝i个字符到substring中。

		 substring[i]='\0';

		 if(strstr(longstring,substring)!=NULL)

			return substring;

		}
	}

}