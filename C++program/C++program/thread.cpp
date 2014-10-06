#include <iostream>
#include <windows.h>
using namespace std;
 
DWORD WINAPI Fun(LPVOID lpParamter)
{    
      while(1) { cout<<"Fun display!"<<endl; Sleep(1000);}
}
 