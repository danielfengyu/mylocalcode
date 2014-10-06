#include<iostream>
using namespace std;
bool isReverseStr(char *str)
{
	int found=1;
	int len = strlen(str);
	int i=len/2;
	for(int j=0;j<i;j++)
	{
		if(*(str+j) != *(str+len-j-1))
		{
			found=0;
			break;
		}
	}
	return found;
}