#include<iostream>
using namespace std;
class Test
{
private:
    int num;
public:
    Test(double r) : num(r){ } //初始化
    Test operator+(double r);
    friend Test operator+(double a,Test &c);
    void show()
    {
        cout << num << endl;
    }
};
Test Test ::operator+(double r)  // 能解释例如  t1+5
{
    return Test(num+r);
}
Test operator+(double a,Test &c) // 能解释   5+t1 但是是普通函数无法访问类里面的私有成员  所以需要友元函数
{
    return Test(a+c.num);
}
int main()
{
    Test t1(10);
    t1=t1+5;
    t1.show();
    t1=5+t1;
    t1.show();
}
