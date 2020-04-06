#include<iostream>
using namespace std;
class Test  //基类
{
private:
    int a;
public:
    virtual void print()   //虚函数
    {
        cout << "out in Test" << endl;
    }
};
class Try1 :public Test //子类
{
private:
    int b;
public:
    void print()
    {
        cout << "out in Try1" << endl;
    }
};
class Try2 :public Test //子类
{
private:
    int b;
public:
    virtual void print()    //virtual 同名函数在基类中是虚函数在子类同名中可写可不写
    {                       //为了更清晰明了，建议写上
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
