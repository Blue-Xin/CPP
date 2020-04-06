#include<iostream>
using namespace std;
class Test  //基类    也叫接口函数
{
public:
    virtual void print()=0;   //纯虚函数
};
class Try1 :public Test //子类
{
private:
    int b;
public:
    virtual void print()
    {
        cout << "out in Try1" << endl;
    }
};
class Try2 :public Test //子类
{
private:
    int b;
public:
    virtual void print()
    {
        cout << "out in Try2" << endl;
    }
};
/*实现一个接口不同输出*/   //指针方式
void fun(Test *p)
{
    p->print();
}
void func(Test &a)      //引用方式
{
    a.print();
}
int main()
{
    Try1 t1;
    Try2 t2;
    fun(&t1);
    fun(&t2);
    cout << "************" << endl;
    func(t1);
    func(t2);
}

