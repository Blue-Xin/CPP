#include<iostream>
using namespace std;
class student
{
    private:
    int age;
    int grade;
    string name;
    public:
    //法一
    void getage(int age)
    {
        this->age=age;
    }
    void showage()
    {
        cout << age << endl;
    }
    student *func()
    {
        return this;
    }
    student test()
    {
        return *this;
    }
};
int main()
{
    student tom;
    tom.getage(10);
    tom.showage();
    student *p=tom.func();// 将this的指针赋给p
    p->showage();//再指向showage

    student jack=tom.test();
    jack.showage();
}