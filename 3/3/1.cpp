#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main(){
	string st;
	string sto;
	vector<string> vs;
	int i=5;
	while(i>0){
		cin>>st;
		vs.push_back(st);
		i--;
	}
	 vector<string>::iterator iter;
    for( iter = vs.end()-1; iter != vs.begin()-1; iter-- )
    {
        cout << *iter << endl;
    }
	system("pause");
	return 0;
}

void addCandidate(string st){

}
void vote(string st){
	
}
void getVoteResult(){

	
}