#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string bar = "lvalue";

  vector<string> vec;
  vector<string> v1;
  vec.push_back(bar);
  // vec.push_back(bar);
  v1.push_back(move(bar));

  cout << "this is vec" << endl;
  for(const auto & single : vec)
    cout << single << endl;

  cout << "this is v1" << endl;
  for(const auto & single : v1)
    cout << single << endl;

}
