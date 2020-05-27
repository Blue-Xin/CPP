// 随机访问
#include<iostream>
#include<vector>
using namespace std;
int main()
 {  
   /*相当于定义数组，同时初始化；
 1.vector <T> a1;默认初始化，初值为空
 2. vector <T> a2(a1),定义a2,初值为a1 
 3.vector <T> a3(n,i),包含了n个值为i的元素集合 
 4.3.vector <T> a4(n),包含了n个值为0的元素集合  
 */  
//当希望可以顺序遍历或者索引的时候，选用vector容器
  vector<int> vector1;
  //向vector的尾部加入元素用push_back(),容器大小+1
  vector1.push_back(7);
  vector1.push_back(8);
  vector1.push_back(9);
  for(int i=0;i<vector1.size();i++)  //不实用迭代器实现遍历
    {
        cout << vector1[i] << ",";
    }
    cout << endl;
  //向vector的尾部弹出元素用pop_back(),容器大小-1
  vector1.pop_back();
  //返回vector的大小
  vector1.size();
  //判断vector是否为空
  vector1.empty();
  //返回容器第一个元素，容器大小不变
  vector1.front();
  //返回容器最后一个元素，容器大小不变
  vector1.back();
  //vector可以选择位置进行插入,用insert()
  vector1.insert(vector1.begin()+1, 15);
  //vector也可以选择位置进行删除，用erase()
  vector1.erase(vector1.begin()+2);
  //容器还有一个操作就是用迭代器进行遍历
  vector<int>:: iterator it;
  for(it = vector1.begin(); it!= vector1.end(); it++)
    cout << *it << " ";  //访问方式要加* (类似于指针)
    cout << endl;
return 0;
}