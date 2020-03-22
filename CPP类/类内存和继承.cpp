#include<iostream>
using namespace std;
class person
{
private:
    int age;
    int grade;
public:
    void SetAge(int a)
    {
        this->age=a;
    }
    int GetAge()
    {
        return this->age;
    }
    void SetGrade(int g)
    {
        grade=g;
    }
    int  GetGrade()
    {
        return this->grade;
    }
};
class student : public person //继承person的public 仅仅是继承了对应的成员 不会继承成员的值
{
private:
    int age;
    int grade;
    string name;
public:
    void SetName(string n)
    {
        this->name=n;
    }
    string GetName()
    {
        return this->name;
    }
};
int main()
{
    person p;
    p.SetAge(9);
    cout << "年龄：" << p.GetAge() << endl;
    p.SetGrade(1);
    cout << "年级：" << p.GetGrade() << endl;
    student s;
    s.SetName("任");
    cout << "姓名：" << s.GetName() << endl;
    s.SetAge(20);
    cout << "年龄：" << s.GetAge() << endl;
    s.SetGrade(2);
    cout << "年级：" << s.GetGrade() << endl;
} // namespace std;
