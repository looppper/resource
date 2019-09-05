#include <list>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  // emplace_front() can handle more complex task
  list< pair<int, char> > mylist;
  mylist.emplace_front(1, 'a');
  mylist.emplace_front(2, 'b');

  for(auto &single: mylist)
    {
      cout << single.first << endl;
    }

  // list<int> mylist;
  // mylist.push_back(1);

}
