#include<iostream>
#include<vector>   //vector是先进后出，就像一个罐子最先取到得是最上面的 
using namespace std;
int main()
{
    vector<int> k;
    k.push_back(2);
    k.push_back(10);
    k.push_back(35);
    k.push_back(15);
    for(int i=0;i<k.size();i++)  //不实用迭代器实现遍历
    {
        cout << k[i] << ",";
    }
    cout << endl;
    vector<int>::iterator j; // 正向迭代器   迭代器实现遍历
    for(j=k.begin();j<k.end();j++)
    {
        cout << *j << " ";
    }
    cout << endl;
    vector<int> s;
    s.push_back(2);
    s.push_back(10);
    s.push_back(35);
    s.push_back(15);
    vector<int>::reverse_iterator l;// 反向迭代器   迭代器实现遍历
    for(l=s.rbegin();l<s.rend();l++)
    {
        cout << *l << " ";
    }
    cout << endl;
}
