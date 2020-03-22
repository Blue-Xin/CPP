#include<iostream>
using namespace std;
class Test
{
    public:
    static int count;   //静态成员      初始化不能放在类中初始化
    Test()
    {
        count++;
    }
    private:
    int age;
};
int Test ::count = 0; 
int main()
{
    Test t1;
    cout << Test::count << endl;        //静态成员在在所有类成员中是共享的
    Test t2;
    cout << Test::count << endl;        //在类外可使用 :: 来操作静态成员 
    return 0;
} // namespace std;
