#include<iostream>    //浅拷贝如果是地址变量，则拷贝地址，如果删除或修改地址变量里面的值，拷贝对象里面的值依旧会被删除或者修改 
using namespace std;  //不是通过地址拷贝则拷贝过后修改 被拷贝对象对拷贝对象没有影响
class person
{
    public:
        void getage(int a)
        {
            this->age=a;
        }
        void getname(char *n)
        {
            name=n;
        }
    private:
        int age;
        char *name;
};
int main()
{
    person lucy;
    char c[]="hello";
    lucy.getname(c);
    lucy.getage(10);
    person jack=lucy;// jack(lucy);
    lucy.getage(20);
    int *p=(int *)&lucy;
    int *t=(int *)&jack;
    cout << *p << "   " << *t << endl;
    cout << p << "   " << t << endl;
    printf("%p  %p\n",p,t);
} // namespace std;
