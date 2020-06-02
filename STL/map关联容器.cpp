// map   映射关系   一对一  key->vaule
#include<iostream>
#include<map>
using namespace std;
int main()
{
    //初始化
    map<int , string> mymap;
    mymap.insert(pair<int , string>(101,"李同学"));//第一种
    mymap.insert(map<int , string>::value_type(102,"张同学")); // 第二种
    mymap[103]="陈同学"; // 第三种
    //遍历第一种方法
    map<int , string> ::const_iterator it;
    for(it=mymap.begin();it!=mymap.end();++it)
    cout << it->first << " " << it->second << endl;
    cout << endl;
    //第二种遍历auto 由于map是key->vaule 所以是用  & 指针访问 如果只有key没vaule 就不需要指针访问
    for(auto &s: mymap)
    cout<< s.first <<  s.second << endl;
    cout << endl;
    //反向遍历
    map<int , string> :: const_reverse_iterator ite;
    for(ite=mymap.rbegin();ite!=mymap.rend();++ite)
    cout << ite->first << " " << ite->second << endl;
    //查找并删除元素
    int num;
    cin >> num;
    map<int , string> :: const_iterator iter;
    iter=mymap.find(num);        //find()函数在没有找到元素的情况下返回的值是迭代器的end()
    if(iter==mymap.end())
    cout << "没找到" << endl;
    else
    {
        cout << "找到了" << num << "同学" << endl;
        mymap.erase(num);
        cout << "删除后的" << endl;
        for(iter=mymap.begin();iter!=mymap.end();++iter)
        {
            cout<< iter->first << " " << iter->second << endl;
        }
    }
    return 0;
  /* begin()         返回指向map头部的迭代器
     clear(）        删除所有元素
     count()         返回指定元素出现的次数
     empty()         如果map为空则返回true
     end()           返回指向map末尾的迭代器
     equal_range()   返回特殊条目的迭代器对
     erase()         删除一个元素
     find()          查找一个元素
     get_allocator() 返回map的配置器
     insert()        插入元素
     key_comp()      返回比较元素key的函数
     lower_bound()   返回键值>=给定元素的第一个位置
     max_size()      返回可以容纳的最大元素个数
     rbegin()        返回一个指向map尾部的逆向迭代器
     rend()          返回一个指向map头部的逆向迭代器
     size()          返回map中元素的个数
     swap()           交换两个map
     upper_bound()    返回键值>给定元素的第一个位置
     value_comp()     返回比较元素value的函数 */
}
