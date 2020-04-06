#include<iostream>
using namespace std;
class CShape
{
    public:
    virtual double shape()=0;   //纯虚函数
    virtual void print()=0;     //纯虚函数
};
//   C 代表矩形    T代表三角形    R代表圆
class C :public CShape
{
    private:
    int l;  //长
    int w;  //宽
    public:
    C(int a,int b):l(a),w(b)
    {

    }
    virtual double shape()
    {
        return l*w;
    }
    virtual void print()
    {
        cout << "矩形面积：" << shape() << endl;
    }
};
class T :public CShape
{
    private:
    int l;  //底
    int h;  //高
    public:
    T(int a,int b):l(a),h(b)
    {

    }
    virtual double shape()
    {
        return l*h*(0.5);
    }
    virtual void print()
    {
        cout << "三角形面积：" << shape() << endl;
    }
};
class R :public CShape
{
    private:
    int r;  //半径
    public:
    R(int a) : r(a)
    {

    }
    virtual double shape()
    {
        return 3.14*r*r;
    }
    virtual void print()
    {
        cout << "圆面积：" << shape() << endl;
    }
};
int main()
{
    CShape *p;
    T t(4,4);
    C c(2,4);
    R r(5);
    p=&t;
    p->print();
    p=&c;
    p->print();
    p=&r;
    p->print();
}

