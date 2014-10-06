#include<iostream>
using namespace std;
int  main(){
	char a;
	
	while(1){
		cin>>a;
		cout<<(char)(a-32)<<endl;
		if(a=='0'){
			break;
		}
	}
	system("pause");
	return 0;
}