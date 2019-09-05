#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
  bitset<8> foo(string("10110011"));

  cout << foo << " has ";
  cout << foo.count() << " ones and ";
  cout << (foo.size() - foo.count()) << " zeros.\n";
}
