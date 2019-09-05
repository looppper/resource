// 利用堆栈实现的深度搜索(先进后出)
#include <iostream>
#include <stack>

using namespace std;

struct Node
{
  int self;
  Node *left;
  Node *right;
};


int main()
{
  const int TREE_SIZE = 9;
  stack<Node*> unvisited;
  Node nodes[TREE_SIZE];
  Node* current;

  // 初始化树
  for(size_t i = 0; i<TREE_SIZE; ++i)
    {
      nodes[i].self = i;
      int child = i*2+1;
      if (child < TREE_SIZE)
        nodes[i].left = &nodes[child]; // 空引用合法
      else
        nodes[i].left = NULL;

      child++;                    // 处理右子树

      if (child < TREE_SIZE)
        nodes[i].right = &nodes[child];
      else
        nodes[i].right = NULL;

    }

  unvisited.push(&nodes[0]);      // 先把0放入stack

  // 当unvisited不空时
  while(!unvisited.empty())
    {
      current = (unvisited.top());
      unvisited.pop();
      if (current->right != NULL)
        unvisited.push(current->right);

      if (current->left != NULL)
        unvisited.push(current->left);

      cout << current->self << endl;
    }
}
