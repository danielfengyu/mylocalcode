#include<iostream>
using namespace std;
/*
139�����дһ�� C �������ú����ڸ������ڴ�
���������������ַ��������ظ��ַ�����λ������ֵ��
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