#include<iostream>
using namespace std;
class  student
{
    private:
    string name;
    int age;
    int grade;
    public:
    student()//构造函数开始会调用构造函数
    {
        cout << "调用" << endl;
    }
    student(int a)
    {
        cout << a << endl;
    }
    ~student()//析构函数在函数结束的时候会调用析构函数
    {
        cout << "释放" << endl;
    }
};
int main()
{
    student jack;
    student *p=new student;
    student lucy(20);
    delete p;
    return 0;
}