//允许重复元素，也是红黑树，在每个节点处都是链表 链接所有相同重复元素
//其他操作和set一致
#include<iostream>
#include<set>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    multiset<int> mymultiset{1,2,3,4,5};
    mymultiset.insert(1);
    mymultiset.insert(2);
    mymultiset.insert(4);
    mymultiset.insert(3);
    mymultiset.insert(3);
    mymultiset.insert(3); 
    mymultiset.insert(2);
    multiset<int> :: const_iterator i;
    for(i=mymultiset.begin();i!=mymultiset.end();++i)
    {
        cout << *i << "  " ;
    }
    cout << endl;
    //第二种遍历方法 使用auto
    for(auto s: mymultiset)
    cout<< s << "  ";
    cout<< endl;
    auto it=mymultiset.equal_range(2);
    for(auto s=it.first;s!=it.second;++s)    //first是链表的开头，second是链表的末尾
    cout << *s << " ";
    cout << endl;
    auto ite=mymultiset.equal_range(3);
    for(auto s=ite.first;s!=ite.second;++s)  //first是链表的开头，second是链表的末尾
    cout << *s << " ";
    
    
}