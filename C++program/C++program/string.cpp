#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
class String
{
    public:
    String(const char *str = NULL); // ��ͨ���캯��
    String(const String &other); // �������캯��
    ~ String(void); // ��������
    String & operator =(const String &other); // ��ֵ����
	
    private:
    char *m_data; // ���ڱ����ַ���
};
String ::String(const char *str)
{
	if(str==NULL)
	{
		m_data=new char[1];
		*m_data='\0';
	}
	else{
		int size=strlen(str);
		m_data=new char[size+1];
		strcpy(m_data,str);
	}
}
String :: String(const String &other)
{
	int length = strlen(other.m_data);
    m_data = new char[length+1]; // ���ܼ� NULL �ж������
    strcpy(m_data, other.m_data);

}
String ::~String()
{
	delete m_data;
}
String &String ::operator = (const String &other)
{
	 // (1) ����Ը�ֵ // 4 ��
    if(this == &other)
    return *this;
    // (2) �ͷ�ԭ�е��ڴ���Դ // 3 ��
    delete [] m_data;
    // ��3�������µ��ڴ���Դ������������ // 3 ��
    int length = strlen(other.m_data);
    m_data = new char[length+1]; // ���ܼ� NULL �ж������
	assert(m_data != '\0');
    strcpy(m_data, other.m_data);
    // ��4�����ر���������� // 3 ��
    return *this;

}