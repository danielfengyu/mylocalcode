#include<iostream>
#include<vector>
#include<list>
using namespace std;
void list_me()
{
	list<int> list1;
	for(int i=0;i<9;i++)
		list1.push_back(i);
	for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
	{
		if(*it%2)
			list1.erase(it);
	}
}