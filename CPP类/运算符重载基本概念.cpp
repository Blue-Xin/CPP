#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imag;

public:
    complex(int r=0,int i=0) :real(r),imag(i)   //初始化列表
    {

    }
    complex operator-(const complex &c);                    // 重载为成员函数时参数个数是运算符目数减一
    friend complex operator+(const complex &a,const complex &b);
    void show()
    {
        cout << real  << "    " << imag << endl;
    }
};
complex operator+(const complex &a,const complex &b)        //重载为普通函数时参数个数等于运算目数     
   {                                                        //普通函数无法访问类成员所以要用到友元函数
       
       return complex (a.real+b.real,a.imag+b.imag);        //写法一  直接返回  complex(a.real+b.real,a.imag+b.imag)
   }
 /*
    complex operator+(const complex &a,const complex &b)        //重载为普通函数时参数个数等于运算目数
   {
       complex c(a.real+b.real,a.imag+b.imag);      //写法二  先定义一个了对象  complex c  然后(a.real+b.real,a.imag+b.imag)
       return c;                                            //再返回类对象
   }
*/  
complex complex:: operator-(const complex &c)    //类函数 
{
    return complex(real-c.real,imag-c.imag);
}
/*
complex complex:: operator-(const complex &c)
{
    complex  c(real-c.real,imag-c.imag);    //写法二  先定义一个了对象  complex c  然后(real-c.real,imag-c.imag)
    return c;                               //再返回类对象
}
*/
int main()
{
    complex c1(1,1),c2(3,3),c3;
    c3=c1+c2;                                               //等价于operator+(a,b)    
    c3.show();                                          
    c3=c1-c2;                                               //等价于a.operator-(b)
    c3.show();
    return 0;
}
