#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 void readfile(char *filename)
 {
	 //const char filename[] = "mytext.txt";
    ofstream o_file;/* ������������ݴ��ڴ��������ofstream�ǽ�����������ļ�����˶����ļ���˵�ǡ�д��*/ 
	ifstream i_file;/*���������뵽�ڴ棬����ifstream��˵������������ļ��У���˶����ļ���˵�ǡ�����*/ 
    string out_text;
    
    //д
    /*o_file.open(filename);
    for (int i = 1; i <= 10; i++)
    {
         o_file << "��" << i << "��\n"; //������д�뵽�ı��ļ��� 
    } 
    o_file.close();*/
    
    //��
    i_file.open(filename);
    if (i_file.is_open())
    {
            while (i_file.good())
            {
                 i_file>>out_text; //����ȡ�����ݴ洢������out_text�� 
                 cout<<out_text << endl; //�ڿ���̨�����ȡ�����ݡ�Ϊʲô���һ�е����ݻ�������� 
            } 
    }
    else
        cout << "���ļ���" << filename << " ʱ����"; 
    i_file.close();

 }