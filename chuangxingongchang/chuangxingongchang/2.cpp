#include<iostream>
using namespace std;
char *strreplace(char  *str, const char *sub, const char *rep)
{
	int sub_length=0,str_length=0;
	while (*sub != '\0')//���ƥ�䴮sub�ĳ���
	{
		sub_length++;
		sub++;
	}
	while (*str != '\0')//���ģʽ��str�ĳ���
	{
		str_length++;
		str++;
	}
	
	str -= str_length;
	sub -= sub_length;
	if(sub_length>str_length)
		return str;
	int length = 0;//ƥ��ĳ���
	while (*str != '\0')
	{
		length = 0;
		while (*str == *sub&&*sub != '\0'&&*str != '\0')
		{
			str++;
			sub++;
			length++;
		}
		if (length == sub_length)//���ƥ��ɹ�
		{
			int i = 0;
			str -= length;
			sub -= length;
			while (i < length)//�滻Ŀ�괮rep
			{
				*str = *rep;
				str++;
				rep++;
				i++;
			}
			//str = str+1;//ƥ��ɹ���ԭ��strҪ���ǰ��һλ
			rep -= length;
			//str_length += length+1;
		}
		else
		{
			str = str - length + 1;
			sub -= length;
		//	str_length++;
		}
	}
	return str-str_length;
}
int main()
{
	char *sub=new char[100];
	char *str = new char[10000];
	char *rep = new char[100];
	cin >> str>>sub>>rep;
	/*char* str="asdfsasd";
	char* sub="as";
	char*rep="AS";*/
	cout<<strreplace(str, sub, rep);
	cin >> sub;
	return 0;
}