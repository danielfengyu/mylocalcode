#include<iostream>
using namespace std;
char *strreplace(char  *str, const char *sub, const char *rep)
{
	int sub_length=0,str_length=0;
	while (*sub != '\0')//求出匹配串sub的长度
	{
		sub_length++;
		sub++;
	}
	while (*str != '\0')//求出模式串str的长度
	{
		str_length++;
		str++;
	}
	
	str -= str_length;
	sub -= sub_length;
	if(sub_length>str_length)
		return str;
	int length = 0;//匹配的长度
	while (*str != '\0')
	{
		length = 0;
		while (*str == *sub&&*sub != '\0'&&*str != '\0')
		{
			str++;
			sub++;
			length++;
		}
		if (length == sub_length)//如果匹配成功
		{
			int i = 0;
			str -= length;
			sub -= length;
			while (i < length)//替换目标串rep
			{
				*str = *rep;
				str++;
				rep++;
				i++;
			}
			//str = str+1;//匹配成功后，原串str要向后前进一位
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