#include<iostream>
using namespace std;
/*
int main(){
	/*char*p="sd";
	char*str="sdadfsddsdsdssdf";
	char*q="SD";
	cout<<strreplace("asdascsg","as","AS");
	system("pause");
	return 0;
}*/
/*
char *strreplace(char *str, const char *sub, const char *rep)
{
	char*temp;
	const char*temp1;
	char*f=str;
	const char * q1;
	for(;*str!='\0';str++)//从字符串的不同位置进行匹配
	{
		temp=str;//记录匹配开始的位置
		temp1=sub;//
		for(;*temp1!='\0';temp1++){
			if(*str==*temp1){
				str++;
			}
			else
				break;
		}
		str=temp;
		if(*(temp1)=='\0')
		{
			q1=rep;
			for(;*q1!='\0';q1++)
			{
				cout<<*str<<*q1<<endl;
				//*str=*q1;
				str++;
			}
		}
		str=temp;
	}
	str=f;
	while(*str!='\0'){
		cout<<*str;
		str++;
	}
	return f;
}*/
