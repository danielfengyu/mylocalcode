#include <iostream>
#include <string.h>
using namespace std;
class Propotype{
public :
    Propotype(){};
    virtual ~Propotype(){};
    virtual Propotype* Clone()const =0;     //Clone�ӿڣ����ص�ǰ�����һ�����
};
class Book : public Propotype {     //�ӳ������Propotype�̳У��Ӷ�ӵ��Clone����
    char *m_pname;
public :
    Book(const char * pname){
        cout<<"���ڳ���һ����:\t";
        m_pname = new char [strlen(pname)+6];
        strcpy(m_pname,pname);
        strcpy(m_pname+strlen(pname),".ԭ��");
        cout<<m_pname<<endl;
    }
    Book(const Book &b){
        cout<<"���ڵ���һ����:\t";
        m_pname = new char [strlen(b.m_pname)+6];
        strcpy(m_pname,b.m_pname);
        strcpy(m_pname+strlen(b.m_pname),".����");
        cout<<m_pname<<endl;
    }
    ~Book(){cout<<"��\t��"<<m_pname<<"��\t�ѱ����١�"<<endl;delete [] m_pname;}
    Propotype *Clone()const{
        Book *temp = new Book(*this);
        return temp;
    }
};
class CD:public Propotype{
    char *m_pname;
public :
    CD(const char *pname){
        cout<<"���ڿ�¼һ��CD:\t";
        m_pname = new char [strlen(pname)+6];
        strcpy(m_pname,pname);
        strcpy(m_pname+strlen(pname),".ԭ��");
        cout<<m_pname<<endl;
    }
    CD(const CD &b){
        cout<<"���ڸ���һ��CD:\t";
        m_pname = new char [strlen(b.m_pname)+6];
        strcpy(m_pname,b.m_pname);
        strcpy(m_pname+strlen(b.m_pname),".����");
        cout<<m_pname<<endl;
    }
    ~CD(){cout<<"����\t"<<m_pname<<"\t�ѱ����١�"<<endl;delete [] m_pname;}
    Propotype *Clone()const{
        CD *temp = new CD(*this);
        return temp;
    }
};
/*int main()
{
    Book b1("ƽ��������");
    CD cd1("Ц������");
    cout<<endl;
    cout<<"��һ�����ư汾������¯"<<endl;
    Propotype *b2 = b1.Clone();        //���Ƶ�ʱ�򲻹���b1�ľ������ͣ������
                                    //ʹ��ԭ��ģʽ����ֱ��ʹ�ø��ƹ��캯���ĺô�
    Propotype *cd2 = cd1.Clone();
    cout<<endl;
    cout<<"�ڶ������ư汾Ҳ������"<<endl;
    Book b3(b1);    //ʹ�ø��ƹ��캯��ͬ�����Դﵽ������Ŀ�ģ���û�����淽��
    CD  cd3(*((CD *)cd2));  //ʹ�ø��ƹ��캯���������Ѿ���һ��
                            //���������ٿ�������ʱ���͸��鷳�ˡ�
    Propotype *cd4 =cd2->Clone();
    cout<<endl;
    cout<<"���ٵ�һ���������"<<endl;
    delete b2;      //��C++�У�ȱ�ݾ��ǿ����Ķ�����ָ�����ʽ���ڣ�
                //�����Զ���������Ȼ���������캯�����ɵĶ���Ͳ��������������
    delete cd2;
    cout<<endl;
    cout<<"���ٲ��ֵڶ����������"<<endl;
    delete cd4;
    cout<<endl;
    cout<<"��������ڶ���������Ｐԭ�����"<<endl;
	system("pause");
    return 0;
}*/