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
	//srand((unsigned )time(NULL))//这样也可以
	while(i<10){
		 a=rand()%100+1;
		if(a>60)
		{
			cout<<a<<"及格了"<<endl;
		}
		else
		{
			cout<<a<<"没及格"<<endl;
		}
		i++;
	}
	cout << __FILE__ ;
	cout<<__LINE__ ;

}