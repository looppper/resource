#include <iostream>

using namespace std;

void cite(int &num)
{
  num = 1;
}

int main()
{
  int num = 0;

  cite(num);

  cout << num << endl;
}
