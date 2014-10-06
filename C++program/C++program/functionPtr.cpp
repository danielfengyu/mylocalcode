#include<stdio.h>
 
 typedef int (*FP_CALC)(int, int);
 //注意这里不是函数声明而是函数定义，它是一个地址，你可以直接输出add看看
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
      FP_CALC fp = calc_func(op); //根据预算符得到各种运算的函数的地址
          int (*s_fp)(int, int) = s_calc_func(op);//用于测试
 // ASSERT(fp == s_fp);   // 可以断言这俩是相等的
      if (fp) return fp(a, b);//根据上一步得到的函数的地址调用相应函数，并返回结果
      else return -1;
 }
