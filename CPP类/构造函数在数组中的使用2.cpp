#include<iostream>
using namespace std;
class Test 
{
    public:
    Test(int a)             //   1
    {
    cout << "单参数初始化" << endl;
    }
    Test(int a,int b)       //    2
    {
        cout << "双参初始化" << endl;
    }
    Test()                  // 3
    {
        cout << "无参初始化" << endl;
    }
};
int main()
{
    cout << "***********" << endl;  
    Test a1[3]={1,Test(1,2)};                   //分别走1   2   3  
    cout << "***********" << endl;
    Test a2[3]={Test(2,3),Test(3,4),1};         //分别走2   2   1
    cout << "***********" << endl;
    Test *a[3]={new Test(4),new Test(1,2)};     //分别走1   2  由于是指针且存在一个没有赋值，所以空指针不是对象，不会被初始化
}
/*答案：
***********
单参数初始化
双参初始化
无参初始化
***********
双参初始化
双参初始化
单参数初始化
***********
单参数初始化
双参初始化
*/
