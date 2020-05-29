#include<iostream>
#include<queue>
using namespace std;
int main()
{
  //当希望放入的元素是先进先出时，选用队列queue容器
  queue<int> queue1;
  //向queue中压入元素用push()
  queue1.push(4);
  queue1.push(5);
  queue1.push(6);
  //访问queue中的首元素用front()，这里和stack是不同的
  cout << "The first element of queue is: " << queue1.front() << endl;
  //还可以访问queue的尾元素用back()
  cout << "The last element of queue is: " << queue1.back() << endl;
  //其他的操作和stack类似
  //弹出queue中的首元素
  queue1.pop();
  //返回queue的大小
  queue1.size();
  //判断queue是否为空
  queue1.empty();
}
