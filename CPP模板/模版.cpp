#include<iostream>
using namespace std;
template<typename T>
void Comare(T f,T g)
{
    T tem=f;
    f=g;
    g=tem;
    cout << f << " " << g <<  endl;
}
int main()
{
    int a,b;
    a=10,b=20;
 Comare(a,b);
    double c,d;
    c=13.256,d=25.154;
 Comare(c,d);
}
