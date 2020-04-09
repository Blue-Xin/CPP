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
    void setage(int a)
    {
        age=a;
        cout << "年龄："<< age <<endl;
    }
    void setgrade(int g)
    {
        grade=g;
        cout << "年级："<< grade <<endl;
    }
    void setname(string n)
    {
        name=n;
        cout << "姓名："<< name << endl;
    }
};
int main()
{
    student jack;
    jack.setage(20);
    jack.setgrade(1);
    jack.setname("jack");
    cout << endl;
}
/*答案：
年龄：20
年级：1
姓名：jack
*/
