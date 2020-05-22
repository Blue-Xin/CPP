#include<iostream>
using namespace std;
template<typename T> // 是这个类的模板
class Test
{
    public:
    template<typename T1>  // 模板成员 
    void func(T1 t)
    {
        cout << t;
    }
};
int main()
{
    Test <int> t; // 默认用int类型的模版  是前面template<typename T>的
    t.func('k');  // 成员函数模板被实例化为char类型
    t.func("hello");// 成员函数再次被实例化为char*类型
    return 0;    
}