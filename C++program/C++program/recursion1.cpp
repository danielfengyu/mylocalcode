#include<iostream>
using namespace std;
/*
3. �ݹ�������µݹ麯����ֵ��쳲���������
f(1)=1
f(2)=1
f(n)=f(n-1)+f(n-2) n>2
*/
int recursion_sum(int n)
{
	int s,s1,s2;
	s1=1;//����f��n-1����ֵ
	s2=1;//����f(n-2)��ֵ
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