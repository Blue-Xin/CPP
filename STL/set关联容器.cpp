//不会出现重复元素 自动排序
//set是红黑树 自动保持平衡 自动生成平衡查找树
#include<iostream>
#include<set>
using namespace std;
int main()
{
    /*set<T> s;         //初始化的三种方式
    set<T> s(s1);
    set<T> s(b, e);*/
    //set<T> s;
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    //set<T> s(s1); //直接拷贝全部
    set<int> a(s);
    //set<T> s(b, e);
    set<int> b(s.begin(),s.end()); //从首地址拷贝到末地址
    set<int> :: const_iterator it;
    for(it=s.begin();it!=s.end();++it)
    cout<< *it << " ";
    cout << endl;
    set<int> :: const_iterator ite;
    for(ite=a.begin();ite!=a.end();++ite)
    cout<< *ite << " ";
    cout << endl;
    set<int> :: const_iterator iter;
    for(iter=b.begin();iter!=b.end();++iter)
    cout<< *iter << " ";
    cout << endl;
    //元素查找
    int i;
    cout << "输入查找数字：" << endl;
    cin >> i;
    set<int> :: const_iterator itera;
    itera=a.find(i);
    if(itera==a.end())
    cout<< "没找到";
    else 
    cout<< "找到了" << endl;
    //begin() 　　 返回set容器的第一个元素的地址
    //end() 　　　　 返回set容器的最后一个元素地址
    //clear() 　　 删除set容器中的所有的元素
    //empty() 　　　 判断set容器是否为空
    //size() 　　　　 返回当前set容器中的元素个数
    //erase(it) 删除迭代器指针it处元素
    //insert(a) 插入某个元素
    //count() :用来查找set中某个元素出现的次数。这个函数在set并不是很实用，因为一个键值在set只可能出现0或1次，这样就变成了判断某一键值是否在set出现过了。
    //find(): 用来查找set中某个元素出现的位置。如果找到，就返回这个元素的迭代器，如果这个元素不存在，则返回 s.end() 。 (最后一个元素的下一个位置，s为set的变量名)
}
