#include<iostream>
using namespace std;
int continumax(char *outputstr,char *intputstr)
{
	int count=0;
	int max=0;
	char *out=outputstr;
	char *temp,*final;
	while(*intputstr)
	{
		if((*intputstr>='0') && (*intputstr<='9'))
		{
			for(temp=intputstr;*temp>='0'&&*temp<='9';intputstr++)
				count++;
		}
		else
		{
			intputstr++;
		}
		if(count>max)
		{
			max=count;
			count=0;
			final=temp;
		}
		
	}
	for(int i=0;i<max;i++)
	{
		*out=*final;
		out++;
		final++;
	}
	*out='\0';
	//cout<<out<<endl;
	return max;
}