#include<iostream>
#include<cstring>
using namespace std;

/*
	求一个字符串中的最大相同子串（重复子串）
*/
void LongChar(char* str)
{
 if(str==NULL)
  return;
 int max=0;
 int first=0;
 int count=0;
 for(int i=1;i<strlen(str);i++)//决定每轮开始时的相隔距离。
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
