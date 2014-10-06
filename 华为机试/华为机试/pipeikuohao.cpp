#include<iostream>
#include<stack>
using namespace std;
bool kuohaopipei(char * str)
{
	stack<int> s;
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			s.push(str[i]);
		}
		else if(str[i]==')')
		{
			char ch1=s.top();
			if(ch1!='(')
				return false;
		}
		else if(str[i]=='}')
		{
			char ch2=s.top();
			if(ch2!='{')
				return false;
		}
		else if(str[i]==']')
		{
			char ch3=s.top();
			if(ch3!='[')
				return false;
		}
		else if(str[i]==')' && s.top()=='('&&s.empty()==0)
		{
			s.pop();
		}
		else if(str[i]=='}' && s.top()=='{'&&s.empty()==0)
		{
			s.pop();
		}
		else if(str[i]==']' && s.top()=='['&&s.empty()==0)
		{
			s.pop();
		}

	}
	if(s.empty()==1)
		return true;
	else
		return false;
}
