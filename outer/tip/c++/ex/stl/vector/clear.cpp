#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);

  cout << "vector内元素为" << endl;
  for(auto & single : vec)
    cout << single << endl;

  vec.clear();

  cout << "vector内元素为" << endl;
  for(auto & single : vec)
    cout << single << endl;
}
