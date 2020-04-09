#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    public:
    A()
    {
        cout << "first" << endl; 
    }
    A(int a)
    {
        x=a;
        cout << "second" << endl;
    }
};
int main()
{
    A a1[2];// 走无参数的函数初始化
    cout << "STOP1" << endl;
    A a2[2]={5,9};// 走由参数的函数初始化
    cout << "STOP2" << endl;
    A a3[2]={5}; // 由于只给a3[0] 赋了值   a3[1]没有赋值所以走无参数函数初始化
    cout << "STOP3" << endl;
    A *a4= new A[2]; // 声明的是空的，所有走无参数函数初始化
    delete []a4;
    cout << "STOP4" << endl;
}
/*答案：
first
first
STOP1
second
second
STOP2
second
first
STOP3
first
first
STOP4
*/
