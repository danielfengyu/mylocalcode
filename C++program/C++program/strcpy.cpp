#include<iostream>
#include<cassert>
using namespace std;
/*
��֪strcpy ������ԭ����
char *strcpy(char *strDest, const char *strSrc);
����strDest ��Ŀ���ַ�����strSrc ��Դ�ַ�����
��1��������C++/C ���ַ����⺯�������д���� strcpy
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
    assert((strDest!=NULL) && (strSrc !=NULL)); // 2��
    char *address = strDest; // 2��
    while( (*strDest++ = *strSrc++) != '\0' ) // 2��
         NULL ;
    return address ; // 2��
}*/
