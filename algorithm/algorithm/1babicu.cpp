#include<stdio.h>
__int64 d0[40],d1[40];//以0与非0结尾39害我调试了N久
void  babicu()
{
 d0[0]=1;
 d1[0]=2;
 printf("%I64d %I64d \n",d0[0],d1[0]);
 for(int i=1;i<40;i++)
 {
   d0[i]=d1[i-1];//前一个非0的就是这一个要以0结尾的
   d1[i]=2*d1[i-1]+d0[i-1]*2;//前一个非0的与以0的都要乘以2
 }
 
 int n;
 while((scanf("%d",&n))!=EOF)
 {
  printf("%I64d %I64d \n",d0[0],d1[0]);
  printf("%I64d %I64d \n",d0[n-1],d1[n-1]);
  printf("%I64d\n",d0[n-1]+d1[n-1]);
 }
}