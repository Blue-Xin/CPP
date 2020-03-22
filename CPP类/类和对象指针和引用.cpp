#include<iostream>
using namespace std;
class student 
{
    private:
    int age;
    string name;
    public:
    void Setage(int a)
    {
        age=a;
    }
    int Getage()
    {
        return age;
    }
    void Setname(string n)
    {
        name=n;
    }
    string Getname()
    {
        return name;
    }
};
int main()
{
    student a1,a2;
    student * p1=&a1;//用指针访问函数
    student &a=a2; // 引用    a的值改了 a2 的值跟着改
    p1->Setage(5);
    cout << p1->Getage() << endl;
    p1->Setname("Ren");
    cout << p1->Getname() << endl;
    a.Setage(5);
    cout << a.Getage() << endl;
    a.Setname("Ren");
    cout << a.Getname() << endl;
}