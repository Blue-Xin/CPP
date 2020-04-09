#include<iostream>
using namespace std;
class Complx
{
    private:
    int x;
    int y;
    public:
    void Set()
    {
        cout << x << "  " << y << endl;
    }
    Complx (double r,double i) // c1
    {
        x=r;
        y=i;
    }
    Complx (double r) // c2
    {
        x=r;
        y=0;
    }
    Complx (Complx c1,Complx c2)//c3   重载 c1 c2
    {
        x=c1.x+c2.x;
        y=c1.y+c2.y;
    }
};
int main()
{
    Complx c1(2,3);
    Complx c2(6);
    Complx c3(c1,c2);
    c1.Set();
    c2.Set();
    c3.Set();
}
//答案   2  3
//      6  0
//      8  3
