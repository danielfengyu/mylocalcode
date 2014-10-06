#include<iostream>
#define MIN(A,B)((A)<=(B)?(A):(B))
#define A 10
#define B 12

using namespace std;
void  defineExpression()
{
	int a,b;
	int *p=&a;
	cin>>a>>b;
	cout<<MIN(*p++,b);
}