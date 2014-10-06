#include<iostream>
using namespace std;
void grade_line()
{
	int i=0,grades[10],lines[7]={0};
	for(i=0;i<10;i++)
	{
		cin>>grades[i];
		switch(grades[i]/10)
		{
		case (10):
		case (9):
		case (8):
		case (7):
		case (6):lines[6]++;break;
		case (5):lines[5]++;break;
		case (4):lines[4]++;break;
		case (3):lines[3]++;break;
		case (2):lines[2]++;break;
		case (1):lines[1]++;break;
		case (0):lines[0]++;break;
		}
	}
	for(i=6;i>=0;i--)
	{
		if(lines[i]>=6) break;
		else{
			lines[i-1]+=lines[i];
		}
	}
	cout<<i*10<<endl;
}