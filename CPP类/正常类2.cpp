#include<iostream>
#include<string>
using namespace std;
class student
{
private:
int age;
int grade;
string name;
    /* data */
public:
void getage(int a);
int Age();
void getgrade(int g);
int Garde();
void getname(string n);
string Name();
};
void student::getage(int a)  
{
    age=a;
}
int student::Age()
{
    return age;
}
void student::getgrade(int g)
{
    grade=g;
}
int student::Garde()
{
    return grade;
}
void student::getname(string n)
{
    name=n;
}
string student::Name()
{
    return name;
}
int main()
{
    student jack;
    jack.getage(20);
    cout << "年龄：" << jack.Age() << endl;
    jack.getgrade(1);
    cout << "年级：" << jack.Garde() << endl;
    jack.getname("jack");
    cout << "姓名："<< jack.Name() << endl;
    return 0;
}
/*答案：
年龄：20
年级：1
姓名：jack
*/
