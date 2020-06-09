//允许出现重复元素，每一个节点处都会有一个链表来处理重复元素
//排序默认会按照  key 的大小从小到大排序
#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int ,string> mymultimap;
    mymultimap.insert(pair<int , string>(101,"李同学"));
    mymultimap.insert(pair<int , string>(101,"李同学"));
    mymultimap.insert(pair<int , string>(102,"王同学"));
    //第一种
    multimap<int ,string> :: const_iterator it;
    for(it=mymultimap.begin() ; it!=mymultimap.end() ; ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    //第二种
    for(auto a=mymultimap.begin(),b=mymultimap.end();a!=b;++a)
    {
        cout << a->first << " " << a->second << endl;
    }
    cout << endl;
    //第三种
    for(auto &m : mymultimap)
    {
        cout << m.first << " " << m.second << endl;
    }
}