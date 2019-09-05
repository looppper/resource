#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
  forward_list<long> coil = {2,3,4,5};

  coil.resize(9);               // 增加size到9个,并把未额外元素全部置0
  coil.resize(10,99);           // 增加元素到10个, 并把额外元素都设为99(第十个)

  for(const auto &ele: coil)
    cout << ele << endl;
}
