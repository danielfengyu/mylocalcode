#ifndef _SUM_H
#define _SUM_H
class Sum
{
public :
	static int getSum();
	Sum()
	{
		sum+=(sum+1);
	}
private:
	static int sum;
};
void list_me();
int go_up_stage_1(unsigned int n);
int go_up_stage_2(unsigned int n);
void difference(int data1[],int data2[]);
#endif