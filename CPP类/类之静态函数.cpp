#include<iostream>
using namespace std;
void func() // 全局函数
{

}
class Test
{
    public:
    static int count;   //静态成员      初始化不能放在类中初始化
    Test()
    {
        count++;
    }
    static void show()   // 静态函数          只能使用静态成员 静态函数 其他类外的的函数 ！！！   没有this指针！！！
    {
        cout << count << endl;
    }
    static void test()   //  静态函数
    {
        show();
    }
    private:
    int age;
};
int Test ::count = 0; 
int main()
{
    Test t1;
    cout << Test::count << endl;         //静态成员在在所有类成员中是共享的
     t1.show();  //1     
    Test t2;
    cout << Test::count << endl;        //在类外可使用 :: 来操作静态成员 
    t2.show();  //2
    return 0;
} // namespace std;
