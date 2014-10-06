#include<iostream>
using namespace std;
/*
3. 递归计算如下递归函数的值（斐波拉契）：
f(1)=1
f(2)=1
f(n)=f(n-1)+f(n-2) n>2
*/
int recursion_sum(int n)
{
	int s,s1,s2;
	s1=1;//保存f（n-1）的值
	s2=1;//保存f(n-2)的值
	if(n==2)
	{
		return 2;
	}
	else if(n<2)
	{
		return -1;
	}
	else{
		for(int i=3;i<=n;i++)
		{
			s=s1+s2;
			s2=s1;
			s1=s;
		}
	}
	return s;
}