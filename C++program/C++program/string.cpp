#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
class String
{
    public:
    String(const char *str = NULL); // 普通构造函数
    String(const String &other); // 拷贝构造函数
    ~ String(void); // 析构函数
    String & operator =(const String &other); // 赋值函数
	
    private:
    char *m_data; // 用于保存字符串
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
    m_data = new char[length+1]; // 若能加 NULL 判断则更好
    strcpy(m_data, other.m_data);

}
String ::~String()
{
	delete m_data;
}
String &String ::operator = (const String &other)
{
	 // (1) 检查自赋值 // 4 分
    if(this == &other)
    return *this;
    // (2) 释放原有的内存资源 // 3 分
    delete [] m_data;
    // （3）分配新的内存资源，并复制内容 // 3 分
    int length = strlen(other.m_data);
    m_data = new char[length+1]; // 若能加 NULL 判断则更好
	assert(m_data != '\0');
    strcpy(m_data, other.m_data);
    // （4）返回本对象的引用 // 3 分
    return *this;

}