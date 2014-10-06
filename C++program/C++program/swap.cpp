#include<iostream>
using namespace std;


void swap_twonum(int a,int b)
{
	cout<<"a="<<a<<";b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a="<<a<<";b="<<b<<endl;
}