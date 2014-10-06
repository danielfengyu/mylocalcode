#include <iostream>
#include <string.h>
using namespace std;
class Propotype{
public :
    Propotype(){};
    virtual ~Propotype(){};
    virtual Propotype* Clone()const =0;     //Clone接口，返回当前对象的一个深拷贝
};
class Book : public Propotype {     //从抽象基类Propotype继承，从而拥有Clone方法
    char *m_pname;
public :
    Book(const char * pname){
        cout<<"正在出版一本书:\t";
        m_pname = new char [strlen(pname)+6];
        strcpy(m_pname,pname);
        strcpy(m_pname+strlen(pname),".原版");
        cout<<m_pname<<endl;
    }
    Book(const Book &b){
        cout<<"正在盗版一本书:\t";
        m_pname = new char [strlen(b.m_pname)+6];
        strcpy(m_pname,b.m_pname);
        strcpy(m_pname+strlen(b.m_pname),".盗版");
        cout<<m_pname<<endl;
    }
    ~Book(){cout<<"书\t《"<<m_pname<<"》\t已被销毁。"<<endl;delete [] m_pname;}
    Propotype *Clone()const{
        Book *temp = new Book(*this);
        return temp;
    }
};
class CD:public Propotype{
    char *m_pname;
public :
    CD(const char *pname){
        cout<<"正在刻录一张CD:\t";
        m_pname = new char [strlen(pname)+6];
        strcpy(m_pname,pname);
        strcpy(m_pname+strlen(pname),".原版");
        cout<<m_pname<<endl;
    }
    CD(const CD &b){
        cout<<"正在复制一张CD:\t";
        m_pname = new char [strlen(b.m_pname)+6];
        strcpy(m_pname,b.m_pname);
        strcpy(m_pname+strlen(b.m_pname),".盗版");
        cout<<m_pname<<endl;
    }
    ~CD(){cout<<"光盘\t"<<m_pname<<"\t已被销毁。"<<endl;delete [] m_pname;}
    Propotype *Clone()const{
        CD *temp = new CD(*this);
        return temp;
    }
};
/*int main()
{
    Book b1("平凡的世界");
    CD cd1("笑傲江湖");
    cout<<endl;
    cout<<"第一批复制版本即将出炉"<<endl;
    Propotype *b2 = b1.Clone();        //复制的时候不关心b1的具体类型，这就是
                                    //使用原型模式而不直接使用复制构造函数的好处
    Propotype *cd2 = cd1.Clone();
    cout<<endl;
    cout<<"第二批复制版本也已生成"<<endl;
    Book b3(b1);    //使用复制构造函数同样可以达到拷贝的目的，但没有上面方便
    CD  cd3(*((CD *)cd2));  //使用复制构造函数对上述已经过一次
                            //拷贝对象再拷贝构造时，就更麻烦了。
    Propotype *cd4 =cd2->Clone();
    cout<<endl;
    cout<<"销毁第一批盗版产物"<<endl;
    delete b2;      //在C++中，缺陷就是拷贝的对象（以指针的形式存在）
                //不能自动析构，当然，拷贝构造函数生成的对象就不存在这个问题了
    delete cd2;
    cout<<endl;
    cout<<"销毁部分第二批盗版产物"<<endl;
    delete cd4;
    cout<<endl;
    cout<<"销毁其余第二批盗版产物及原版产物"<<endl;
	system("pause");
    return 0;
}*/