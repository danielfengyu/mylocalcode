#include<iostream>
using namespace std;
/*
2.将整数转换为字符串
将整数转换为字符串相对要复杂些。通过取模
并结合商与余数的关系，可以有几种方法。例如，
123除以100，商为1，余数为23，这样，首先可以
把“1”保存到字符串里。然后23除以10，商为2，
余数为3。这样就可以得到字符串“123”了。但是，
怎样来确定整数的位数确实比较麻烦。有一种相对简单的方法。
首先将123除10取模，得到数字3，此时商为12。
再将12除10取模，得到数字2，商为1。这样，我们可以得到字
符串“321”，接着进行一次逆序即可得到想要的字符串。
同样，如果该整数小于0，我们需要人为地将其变成正数，再进行取模运算！！

*/
char * int_to_str(int num)
{
	char *str=new char[10];
	char *temp=new char[10];
	int flag=0,i=0,j=0;
	if(num<0)
	{
		num=num*(-1);
		flag=1;
	}
	do
	{
		str[i]=(num%10)+'0';
		num/=10;
		i++;
	}while(num);
	if(flag)
	{
		str[i++]='-';		
	}
	while(i>0)
	{
		temp[j++]=str[--i];
		
	}
	temp[j]='\0';//别忘了补0
	return temp;
}