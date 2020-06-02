#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<stack>
using namespace std;
int main()
{
    vector<string> myvector;
    myvector.push_back("张三");
    myvector.push_back("李四");
    for(auto v :myvector)
    {
        cout << v << endl;
    }
    cout << endl;
    //这是auto的第二种遍历方法，下同
    for(auto a=myvector.begin(),b=myvector.end();a!=b;++a)
    {
        cout<< *a << endl;
    }
    cout << endl;
    deque<string> mydeque;
    mydeque.push_back("张三");
    mydeque.push_back("李四");
    for(auto d:mydeque)
    {
        cout << d <<endl;
    }
    cout << endl;
    list<string> mylist;
    mylist.push_back("张三");
    mylist.push_back("李四");
    for(auto l : mylist)
    {
        cout << l << endl;
    }
    cout << endl;
    //set stack mutliset 和上面用法一致
    //关于map 存在映射关系，所以用法稍有不同
    map<string , int> mymap;
    mymap.insert(pair<string , int>("张三",22));
    mymap.insert(pair<string , int>("李四",22));
    for(auto &m : mymap)
    {
        cout << m.first << " " << m.second << endl;
    }
}
