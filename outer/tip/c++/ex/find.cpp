#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> vec;
  vector<int>::iterator it;

  for(size_t i = 0; i<100; ++i)
    vec.push_back(i);

  it = find(vec.begin(), vec.end(), 5);

  if (it != vec.end())
    cout << "element found" << endl;
  else
    cout << "there is no element found" << endl;
}
