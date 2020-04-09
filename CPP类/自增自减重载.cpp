#include<iostream>
using namespace std;
//在相同情况下 前置自增自减的运算速度快于后置，
class Demo
{
private:
    int num;
public:
    Demo(int n):num(n)    //切记初始化列表，不然报错显示没有办法把  num  初始化
    {

    }
    Demo & operator++();    //前置自增
    Demo operator++(int);   //后置自增
    operator int()          //强制类型转换  将对象转换为int的整型
    {
        return num;
    }
    friend Demo & operator--(Demo &);    //前置自减  全局的函数
    friend Demo operator--(Demo &,int);   //后置自减  全局的函数
};
/*前置自增**/
Demo & Demo ::operator++()
{
    ++num;
    return *this;
}
/*后置自增**/
Demo Demo ::operator++(int k)
{
    Demo tmp(*this);        //记录原来的n的值
    num++;
    return tmp;
}
/*前置自减**/
Demo & operator--(Demo & d)
{
    d.num--;    //这里无论  -- 在前在后都不影响，你最终的n值都会被修改
    return d;
}
/*后置自减**/
Demo operator--(Demo &d,int k)
{
    Demo tem(d);        //记录原来的通过引用  d   来记录  n  的值
    d.num--;
    return tem;
}
int main()
{
    Demo d(5);
    cout << (int)(d++)<< "   ";         //可省略 (int)
    cout << (int)d << "   ";            //可省略 (int)
    cout << (int)(++d) << endl;         //可省略 (int)
    cout << (int)(d--)<< "   ";         //可省略 (int)
    cout << (int)d << "   ";            //可省略 (int)
    cout << (int)(--d) << endl;         //可省略 (int)
}
