#include<iostream>
using namespace std;
void light_bubles()
{
	int i,j=1,count,n,m=0;
	cin>>n;
	while(j<=n)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(j%i==0)count++;
		}
		if(count%2!=0)m++;
		j++;
	}
	cout<<m<<endl;
}