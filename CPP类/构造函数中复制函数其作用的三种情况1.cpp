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

int main()
{
    Test t1;
    cout << "***********" << endl;
    Test t2=t1; // 等价于  Test t2(t1);  会调用复制（拷贝）函数
    cout << "***********" << endl;
    return 0;
}
/*答案：
***********
调用复制
***********
*/
