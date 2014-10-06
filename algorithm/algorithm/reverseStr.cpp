#include<iostream>
#include<cassert>
using namespace std;
char * reverseStr(char *str)
{
	assert( str != NULL);
	char * p1=str;
	char * p2=str;
	char c;
	while(*p2)
	{
		p2++;
	}
	p2-=1;
	while(p1< p2)
	{
		 c=*p1;
		 *p1++=*p2;
		 *p2--=c;
	}
	return str;
}