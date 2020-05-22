#include<iostream>
using namespace std;
template<typename T, int size>  // int size非模板
class Test
{
    private:
    T array[size];
    public:
    void print()
    {
        for(int i=0;i<size;++i)
        {
            array[i]=i;
            cout << array[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Test<int,10> a1; // 实例化类型的时候因为是int整形所以只需要输入数字
    a1.print();
    Test<double,10> a2;
    a2.print();
    return 0;
}