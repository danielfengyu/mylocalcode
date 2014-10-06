#include<iostream>
#include<cassert>
using namespace std;
char * strcpy(char * dest,char *src)
{
	assert(dest != NULL && src != NULL);
	char *target=dest;
	while(*target++ = *src++);
	return dest;
}