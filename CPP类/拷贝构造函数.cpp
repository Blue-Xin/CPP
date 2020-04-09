#include<iostream>
using namespace std;
class person
{
    public:
    person()
    {
        cout << "person" << endl;
    }
    //拷贝构造函数
    person(const person &p)   // 类的对象的引用
    {
        cout << "person &p" << endl;
    }
    ~person()   //析构函数
    {
        cout << "~person" << endl;
    }
    private:
        int age;
        string name;
};
person test(person p)
{
    return p;
}
int main()
{
    person tom;
    person lucy=tom;//也可以写成lucy(tom); 
} // namespace srd;
//答案    person
//      person &p
//      ~person
//      ~person
