#include<iostream>
using namespace std;

/*********************************************************
*138����дһ�� C �������ú�����һ���ַ������ҵ����ܵ����
*���ַ������Ҹ��ַ�������ͬһ�ַ���ɵġ�
***********************************************************/


void longestSameChar(char *str)
{
	int count=1;
	int max_long=1;
	int len=strlen(str);
	int i,j,num=0;
	char*temp;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[j-1]==str[j])
				count++;
			else
				break;
		}
		cout<<count<<' ';
		
		if(count>max_long)
		{
			max_long=count;
			temp=&str[i];
			//i=max_long+i-1;
		}
		if(count==max_long)
		{
			num++;
		}
		i=count+i-1;//����i���ַ�
		count=1;//���¼���
	}
	for(int m=0;m<max_long;m++)
	{
		cout<<*temp++;
	}
	/*while(num)//�����������������ַ���
		{
			temp=temp+4;
			for(int n=0;n<max_long;n++)
			{
				cout<<*temp++;
			}
			num--;
		}*/
}