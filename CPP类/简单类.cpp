#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    int age;
    int grade;
    string name;
    void putname()
    {
        cout << name << "\n"
        << age << "\n" 
        << grade <<endl;
    }
};

int main()
{
    student jeck;
    jeck.age=20;
    jeck.grade=1;
    jeck.name="杰克";
    jeck.putname();
    student *lucy=new student;
    lucy->age=23;
    lucy->grade=3;
    lucy->name="露西";
    lucy->putname();
    delete lucy;
}
