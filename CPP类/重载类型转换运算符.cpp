#include<iostream>
using namespace  std;
class change
{
private:
    double real;
    double imag;
public:
    change(double r,double i):real(r),imag(i) // 初始化列表
    {

    }
    operator int ()    //不需要写返回值类型    将double类型的转换为int类型
    {
        return real;
    }
};
int main()
{
    change c(1.2,1.3);
    cout << (int)c << endl;
    int a=2+c;                  //因为  c  经过了转换所以   a=2+c  是成立的   
    cout << a << endl;
}

