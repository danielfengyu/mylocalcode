#ifndef _STRING_H
#define _STRING_H
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
String ::String(const char *str);
String :: String(const String &other);
String ::~String();
String &String ::operator = (const String &other);
void String::print(String & other);
#endif