#ifndef _STRING_H
#define _STRING_H
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
String ::String(const char *str);
String :: String(const String &other);
String ::~String();
String &String ::operator = (const String &other);
void String::print(String & other);
#endif