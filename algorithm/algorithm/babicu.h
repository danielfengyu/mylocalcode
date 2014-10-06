#ifndef _BABICU_H
#define _BABICU_H

void babicu();
void  defineExpression();
void foo(void) ;
void UpperCase(char*str);
void randnum();
//int partition(int arr[],int start,int end);
//void swap( int &a, int &b);
void quicksort(int arr[],int start,int end);
void longestSameChar(char *str);
int searchChar(char * src,char ch);
double fenshu_sum();
int StrCmp(const char *str1, const char *str2);
bool isReverseStr(char *str);
char * strcat(char *strDest,char *strSrc);
void print_graphic(int n);
char *commomstring(char *shortstring,char *longstring);
int count(char * str,char *substr);
char * strcpy(char * dest,char *src);
char * reverseStr(char *str);
int continumax(char *outputstr,char *intputstr);
int str_to_int(char str[]);
char * int_to_str(int num);
#endif