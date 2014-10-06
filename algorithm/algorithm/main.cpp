#include<iostream>
#include"babicu.h"
#include<vector>
#include<fstream>
using namespace std;
int main(void)
{

	/*float a=1.0f;
	cout<<(int)a<<endl;
	cout<<(int &)a<<endl;
	cout<<boolalpha<<((int)a==(int &)a)<<endl;
	float b = 0.0f;
	cout << (int)b << endl;
	cout << (int&)b << endl;
	cout << boolalpha << ( (int)b == (int&)b ) << endl; // Êä³öÊ²Ã´£¿*/
	/*vector<int> v;
	int *arr;
	int num;
	ifstream in("\data_in.txt");
	if(!in)
	{
		cout<<"file error";
		exit(1);
	}
	int temp;
	while(!in.eof())
	{
		in>>temp;
		v.push_back(temp);
	}
	in.close();
	arr=new int[v.size()];
	for(int i=0;i<v.size();i++)
	{
		arr[i]=v[i];
	}
	quicksort(arr,0,v.size()-1);
	ofstream out("\data_out.txt");
	if(!out)
	{
		cout<<"file error"<<endl;
		exit(1);
	}
	for(int j=0;j<v.size();j++)
		out<<arr[j]<<' ';
	out.close();*/
	/*char *str=new char[100];
	char ch;
	cin>>str;
	cin>>ch;
	char *s="ddfff";
	//longestSameChar(str);
	int len=strlen(s);
	cout<<searchChar(str,ch)<<' '<<len;*/
	
	//char *str="1234j21";
	//cout<<isReverseStr(str);
	/*int **a[3][4];
	int *b[3][4];
	int c[3][4];
	char *p;
	printf( "%d  %d   %d  %d", sizeof(*a), sizeof(*b), sizeof(c), sizeof(p) );
	//                          16          16      48        4
	printf( "\n" );*/
	/*char*strDest=new char[20];
	char *strSrc=new char[10];
	cin>>strDest>>strSrc;
	cout<<strcat(strDest,strSrc)<<endl;*/

	/*int n;
	cin>>n;
	print_graphic(n);*/
	
	int num;
	cin>>num;
	cout<<int_to_str(num);
	system("pause");
	return 0;
}
