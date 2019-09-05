/*
 * author: vincent
 */
#include <iostream>

using namespace std;

struct S {
  int n;
  S(int);
  S() : n() { }
};

// S::S(int x) : n(x) { }

int main()
{
  S s;
  S s2(10);

  cout << s.n << endl;
  cout << s2.n << endl;
}
