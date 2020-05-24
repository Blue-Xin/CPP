//双向链表
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    /*List1定义和初始化
    list1<int>list1;//创建空list1
    list1<int> lst2(5);//创建含有5个元素的list1
    list1<int>lst3(3,2);//创建含有3个元素的都是2的list1
    list1<int>lst4(lst2);//使用lst2初始化lst4
    list1<int>lst5(lst2.begin(),lst2.end());//创建包含list12的第一个元素到最后一个元素的list1
    */
   list<int> list1;
   list1.push_back(1);//在list1的末尾添加一个元素 
   list1.push_back(2);
   list1.push_back(3);
   list1.push_front(3);//在list1的头部添加一个元素 
   list1.push_front(2);
   list1.push_front(1);
   //删除最后一个元素 
   list1.pop_back(); 
   //删除第一个元素
   list1.pop_front(); 
   //给list1排序
   list1.sort(); 
   //从list1删除3元素 如果元素有重复则一并删除
   list1.remove(3); 
   //删除list1中重复的元素
   list1.unique();
   //把list1的元素倒转
   list1.reverse(); 
   //插入一个元素到list1中  由于list是双向链表不支持随机插入，只能从头部或者尾部插入
   list1.insert(list1.begin(),10); 
   //使用正向迭代器遍历打印
   list<int> ::const_iterator it;   
   for(it=list1.begin();it!=list1.end();++it)
   {
       cout << *it << " ";
   }
   cout << endl;
 /*我是一条分割线---------------------------------------------------**/  
   list<int> list2;
   //在list1的末尾添加一个元素
   list2.push_back(1);
   list2.push_back(2);
   list2.push_back(3);
   //在list1的头部添加一个元素
   list2.push_front(3);
   list2.push_front(2);
   list2.push_front(1);
   //删除最后一个元素 
   list2.pop_back(); 
   //删除第一个元素 
   list2.pop_front();
   //调用第三种语法格式，将 [list1.begin(),list1.end())范围内的元素移动到 list.begin() 位置处                  
   list2.splice(list2.begin(), list1, list1.begin(), list1.end());//list1:
   //使用反向迭代器遍历打印
   list<int> ::const_reverse_iterator t; 
   for(t=list2.rbegin();t!=list2.rend();++t)
   {
       cout << *t << " ";
   }
   cout << endl;
    /*list1.assign(); //给list1赋值 
    list1.back(); //返回最后一个元素 
    list1.begin(); //返回指向第一个元素的迭代器 
    list1.clear(); //删除所有元素 
    list1.empty(); //如果list1是空的则返回true 
    list1.end();; //返回末尾的迭代器 
    list1.erase(); //删除一个元素 
    list1.front(); //返回第一个元素 
    list1.get_allocator(); //返回list1的配置器 
    list1.insert(); //插入一个元素到list1中 
    list1.max_size(); //返回list1能容纳的最大元素数量 
    list1.merge(); //合并两个list1 
    list1.pop_back(); //删除最后一个元素 
    list1.pop_front(); //删除第一个元素 
    list1.push_back(); //在list1的末尾添加一个元素 
    list1.push_front(); //在list1的头部添加一个元素 
    list1.rbegin(); //返回指向第一个元素的逆向迭代器 
    list1.remove(); //从list1删除元素 
    list1.remove_if(); //按指定条件删除元素 
    list1.rend(); //指向list1末尾的逆向迭代器 
    list1.resize(); //改变list1的大小 
    list1.reverse(); //把list1的元素倒转 
    list1.size(); //返回list1中的元素个数 
    list1.sort(); //给list1排序 
    list1.splice(); //合并两个list1 
    list1.swap(); //交换两个list1 
    list1.unique(); //删除list1中重复的元素*/

}
