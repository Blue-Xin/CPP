#include<iostream>
using namespace std;
class student 
{
    public:
    student(int a) : age(a) // 初始化列表
    {

    }
    void show() const 
    {
        cout << age << endl;
    }
    friend void print(const student &s);     //友元函数 （长得真像函数拷贝构造函数就前面多了一个friend）
    private:
    int age;
};
void print(const student &s)
{
    cout << s.age << endl;
}
int main()
{
    student A(20);
    A.show();
    print(A);
    return 0;
}