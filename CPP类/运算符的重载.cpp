#include<iostream>
using namespace std;
/* 对[]的重载**/
class Test1
{
private:
    int val[100];
public:
    Test1()  //初始化数组
    {
        for (int i = 0; i < 100; i++)
        {
            val[i]=i;
        }
    }
    int & operator[](const int n)  // 重载[] 用的是int 的引用（&） 而不是类名
    {
        return val[n];
    }
};
/* 对<<的重载**/
class Test2
{
private:
    int val;
public:
    Test2(int a) :val(a)
    {

    }
    friend ostream & operator<<(ostream &out ,Test2 &o);    // 友元函数
};
ostream & operator<<(ostream &out ,Test2 &o)                //只能是非成员函数，不能调用类成员 所以用友元函数来调用
{ 
    out << o.val << endl;
    return out;                 //切记要返回 ostream 的引用
}
/* 对()的重载**/
class Test3
{
public:
    void operator()()
    {
        cout << "NULL" << endl;
    }
    void operator()(const char * s)  //居然可以直接打印指针   神奇！！！
    {
        cout << s << endl;
    }
};
int main()
{
    /*[]的重载部分**/
    Test1 t1;               
    cout << t1[10] << endl;
    /*<<的重载部分**/
    Test2 t2(5);
    cout << t2 << endl;
    /* 对()的重载**/
    Test3 t3;
    t3();
    t3("Ren南笙");
}
