#include<iostream>
using namespace std;
double fenshu_sum()
{
	double result=0;
	int i=2;
	while(i<42)
	{
		result+=1.0/i;
		i+=2;
	}
	return result;
}