#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
void randnum()
{
	int a,i=0;
	time_t t;
	srand( (unsigned)time( &t ) );
	//srand((unsigned )time(NULL))//����Ҳ����
	while(i<10){
		 a=rand()%100+1;
		if(a>60)
		{
			cout<<a<<"������"<<endl;
		}
		else
		{
			cout<<a<<"û����"<<endl;
		}
		i++;
	}
	cout << __FILE__ ;
	cout<<__LINE__ ;

}