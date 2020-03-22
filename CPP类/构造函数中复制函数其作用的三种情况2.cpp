#include<iostream>
using namespace std;
class Test 
{
    public:
    Test()
    {

    }
    Test(const Test &a) // 复制（拷贝）函数
    {
        cout << "调用复制" << endl;
    }
};
void func(Test t1) // 如果某函数的参数是类函数Test的对象   那么该函数被调用的时候会调用类Test的复制（拷贝）函数
{

}
int main()
{
    Test t2;
    cout << "***********" << endl;
    func(t2);
    cout << "***********" << endl;
}