#include<stdio.h>
__int64 d0[40],d1[40];//��0���0��β39���ҵ�����N��
void  babicu()
{
 d0[0]=1;
 d1[0]=2;
 printf("%I64d %I64d \n",d0[0],d1[0]);
 for(int i=1;i<40;i++)
 {
   d0[i]=d1[i-1];//ǰһ����0�ľ�����һ��Ҫ��0��β��
   d1[i]=2*d1[i-1]+d0[i-1]*2;//ǰһ����0������0�Ķ�Ҫ����2
 }
 
 int n;
 while((scanf("%d",&n))!=EOF)
 {
  printf("%I64d %I64d \n",d0[0],d1[0]);
  printf("%I64d %I64d \n",d0[n-1],d1[n-1]);
  printf("%I64d\n",d0[n-1]+d1[n-1]);
 }
}