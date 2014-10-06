#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 void readfile(char *filename)
 {
	 //const char filename[] = "mytext.txt";
    ofstream o_file;/* 输出流：将数据从内存输出其中ofstream是将数据输出到文件，因此对于文件来说是“写”*/ 
	ifstream i_file;/*将数据输入到内存，其中ifstream是说输入的数据在文件中，因此对于文件来说是“读”*/ 
    string out_text;
    
    //写
    /*o_file.open(filename);
    for (int i = 1; i <= 10; i++)
    {
         o_file << "第" << i << "行\n"; //将内容写入到文本文件中 
    } 
    o_file.close();*/
    
    //读
    i_file.open(filename);
    if (i_file.is_open())
    {
            while (i_file.good())
            {
                 i_file>>out_text; //将读取的内容存储到变量out_text中 
                 cout<<out_text << endl; //在控制台输出读取的内容。为什么最后一行的内容会出现两次 
            } 
    }
    else
        cout << "打开文件：" << filename << " 时出错！"; 
    i_file.close();

 }