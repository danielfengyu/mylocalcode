#include<stdio.h>
 
 typedef int (*FP_CALC)(int, int);
 //ע�����ﲻ�Ǻ����������Ǻ������壬����һ����ַ�������ֱ�����add����
 int add(int a, int b)
 {
      return a + b;
 }
 FP_CALC calc_func(char op)
 {
	return add;
 }
 int (*s_calc_func(char op)) (int, int)
{
	return calc_func(op); 
} 
int calc(int a, int b, char op)
{
      FP_CALC fp = calc_func(op); //����Ԥ����õ���������ĺ����ĵ�ַ
          int (*s_fp)(int, int) = s_calc_func(op);//���ڲ���
 // ASSERT(fp == s_fp);   // ���Զ�����������ȵ�
      if (fp) return fp(a, b);//������һ���õ��ĺ����ĵ�ַ������Ӧ�����������ؽ��
      else return -1;
 }
