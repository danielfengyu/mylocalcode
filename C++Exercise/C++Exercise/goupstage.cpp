#include<iostream>
using namespace std;
int go_up_stage_1(unsigned int n)
{
	int i,j,k,count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			for(k=0;k<n/3;k++)
			{
				if((i+3*k+2*j)==n)
				{
					count++;
				}
			}
		}
	}
	return count;
}

int go_up_stage_2(unsigned int n)
{
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n==3)
	{
		return 4;
	}
	return (go_up_stage_2(n-1)+go_up_stage_2(n-2)+go_up_stage_2(n-3));
}