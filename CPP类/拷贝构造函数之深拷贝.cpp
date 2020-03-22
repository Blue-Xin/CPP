#include <iostream>
using namespace std;
class test 
{
    private:
    int age;
    char * name;
    public:
    void setage()
    {
        cout << age << endl;
    }
    void setname()
    {
        cout << name << endl;
    }
    test(int a,char * n)
    {
        age=a;
        if(NULL==n)
        {
            name = new char[1];
            name[0]='\0';
        }
        else 
        {
            name = new char(strlen(n)+1);
            memcpy(name,n,strlen(n)+1);
        }
    }
    test(const test &p) // 拷贝函数会调用这里的函数 加const修饰符为了防止函数内部数据被修改 
    {
        age=p.age;
        name = new char(strlen(p.name)+1);
        memcpy(name,p.name,strlen(p.name)+1);
    }
    ~test()
    {
        delete [] name;
    }
};
int main()
{
    char c[]={"Ren南笙"};
    test t1(12,c);
    cout << "姓名：";
    t1.setname();
    cout << "年龄：";
    t1.setage();
    test t2=t1;  //t2的深拷贝内容一样但都存储在自己申请的内存空间里面
    cout << "姓名：";
    t2.setname();
    cout << "年龄：";
    t2.setage();

} // namespace std;
