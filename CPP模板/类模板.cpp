#include<iostream>
using namespace std;
template<typename T1 , typename T2>// typename和class意义相同
class Test
{
    public:
    T1 key;
    T2 value;
    Test(T1 v, T2 s) : key(v),value(s)
    {
    }
};
int main()
{
    Test <string , int> T("Ren南笙",20); //类名后面要是T1 T2 的参数类型
    cout << "姓名：" << T.key << endl;
    cout << "年龄：" << T.value << endl;
    Test <char * , int> t("tom",20);
    cout << "姓名：" << t.key << endl;
    cout << "年龄：" << t.value << endl;
    return 0;
}