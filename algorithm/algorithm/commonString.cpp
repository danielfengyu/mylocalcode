#include<iostream>
using namespace std;
/*
146.����A��B,���A��B�е���󹫹��Ӵ���
����A="aocdfe" B="pmcdfa" �����"cdf"
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

		 memcpy(substring,&shortstring[j],i);//���±�j��ʼ����i���ַ���substring�С�

		 substring[i]='\0';

		 if(strstr(longstring,substring)!=NULL)

			return substring;

		}
	}

}