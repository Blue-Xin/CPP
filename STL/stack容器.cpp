#include <iostream>
#include <stack> 
using namespace std;
 int main()
{
  //当希望放入的元素是先进后出时，选用stack容器
  stack<int> stack1;
  //向stack中压入元素用push()
  stack1.push(1);
  stack1.push(2);
  stack1.push(3);
  //访问stack中的首元素用top()，使用时注意top只返回首元素，不弹出
  int firstNumber = stack1.top();
  cout << firstNumber << endl;
  //弹出stack中的首元素用pop(),C++中弹出操作不返回值
  stack1.pop();
  //判断stack是否为空用empty(),空返回true，不空返回false
  //经常被用来判断是否继续循环
  stack1.empty();
  //返回stack的大小
  stack1.size();
  return 0;
}