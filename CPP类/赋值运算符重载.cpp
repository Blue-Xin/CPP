#include<iostream>
#include<cstring>
using namespace std;
class String
{
private:
    char *str;
public:
    String():str(new char[1])
    {
        str[0]=0;
    }
    ~String()   //析构函数
    {
        delete [] str;
    }
    String & operator=(const char *s)    // 函数重载     写法一
    {
        delete [] str;
        str=new char[strlen(s)+1];
        strcpy(str,s);
        return *this;
    }
    const char *c_str()
    {
        return str;
    }
};
/*
String & String :: operator=(const char *s)    //String &   是定义方式      String 是函数所属的类    写法二
{
        delete [] str;
        str=new char[strlen(s)+1];
        strcpy(str,s);
        return *this;
}
*/

int main()
{
    String s;
    s = "HELLO";
    cout << s.c_str() << endl;
}

