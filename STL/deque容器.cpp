// 随机访问 
#include<iostream>
#include<deque>
using namespace std;
int main()
 {
//当希望可以顺序遍历或者索引的时候，选用deque容器
  deque<int> deque1;
  //向deque的尾部加入元素用push_back(),容器大小+1
  deque1.push_back(7);
  deque1.push_back(8);
  deque1.push_back(9);
  for(int i=0;i<deque1.size();i++)  //不实用迭代器实现遍历
    {
        cout << deque1[i] << ",";
    }
    cout << endl;
  //向deque的尾部弹出元素用pop_back(),容器大小-1
  deque1.pop_back();
  //返回deque的大小
  deque1.size();
  //判断deque是否为空
  deque1.empty();
  //返回容器第一个元素，容器大小不变
  deque1.front();
  //返回容器最后一个元素，容器大小不变
  deque1.back();
  //deque可以选择位置进行插入,用insert()
  deque1.insert(deque1.begin()+1, 15);
  //deque也可以选择位置进行删除，用erase()
  deque1.erase(deque1.begin()+2);
  //deque可以将元素插到前面
  deque1.push_front(12);
  //deque也可以将最前面元素删除
  deque1.pop_front();
  //容器还有一个操作就是用迭代器进行遍历
  deque<int>:: iterator it;
  for(it = deque1.begin(); it!= deque1.end(); it++)
    cout << *it << " ";  //访问方式要加* (类似于指针)
    cout << endl;
return 0;
}