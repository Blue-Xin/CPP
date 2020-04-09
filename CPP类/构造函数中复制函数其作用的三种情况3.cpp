#include<iostream>
using namespace std;
class Test 
{
    public:
    int v;
    Test(int n)
    {
        v=n;
    }
    Test(const Test &a) // 复制（拷贝）函数
    {
        v=a.v;
        cout << "调用复制" << endl;
    }
};
/** 如果函数返回值是类Test的对象时，则函数返回时Test的复制（拷贝）构造函数被调用*/
Test func() 
{
    Test b(6);
    return b;
}
int main()
{
    /** 需要说明的是，有些编译器出于程序执行效率的考虑，编译的时候进行了优化，函数返回值对象就不用复制构造函数初始化了，这并不符合c++的标准。*/
    cout << func().v << endl;   
    return 0;
}
/*答案：
6
*/
