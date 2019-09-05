#include <utility>
#include <iostream>

using namespace std;

int main()
{
  pair<int, char> foo (10, 'a'); // 一致性初始化
  pair<int, char> bar (90, 'z');

  // foo.swap(bar);  // c++11 新增用于交换pair的方法

  // first, second为pair<>的两个成员
  cout << "foo's first member is " << foo.first << endl;
  cout << "foo's second member is " << foo.second<< endl;
}

// 运行命令 g++ --std=c++11 -o main source.cpp
