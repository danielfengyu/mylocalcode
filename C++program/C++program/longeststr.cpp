#include<iostream>
#include<cstring>
using namespace std;

/*
	��һ���ַ����е������ͬ�Ӵ����ظ��Ӵ���
*/
void LongChar(char* str)
{
 if(str==NULL)
  return;
 int max=0;
 int first=0;
 int count=0;
 for(int i=1;i<strlen(str);i++)//����ÿ�ֿ�ʼʱ��������롣
  for(int k=0,j=0;j<strlen(str)-i;j++)
  {
   if(str[j]==str[i+j])k++;
   else
    k=0;
   if(k>max)
   {
    max=k;
    first=j-k+1;
   }
  }
  if(max>0)
  {
   cout<<"long:"<<max<<endl;
   for(;count<max;count++)
    cout<<str[first+count];
    cout<<endl;
  }
}
