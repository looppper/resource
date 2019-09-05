#include <iostream>
#include <vector>

using namespace std;

struct kk
{
  int ele1;
  int ele2;
};

int main()
{
  vector<kk> vec;
  kk k1, k2;
  k1.ele1 = 1;
  k1.ele2 = 2;
  k2.ele1 = 3;
  k2.ele2 = 4;
  vec.push_back(k1);
  vec.push_back(k2);
  cout << "打印vector内容" << endl;
  for(vector<kk>::iterator itr = vec.begin(); itr != vec.end(); itr++)
    {
      // vec.erase(itr);
      vec.pop_back();
    }
  // vector<int>::iterator itr = vec.end();
  // vec.erase(itr);
  // vec.pop_back();
  // vec.pop_back();
}
