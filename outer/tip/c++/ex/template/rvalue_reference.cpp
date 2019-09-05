/*
 * author: vincent
 *
 * feature: 一个简单的string, 实现实现拷贝构造函数和拷贝赋值操作符
 */

#include <iostream>


void process_value(int& i) {
  std::cout << "LValue processed: " << i << std::endl;
}

void process_value(int&& i) {
  std::cout << "RValue processed: " << i << std::endl;
}

void forward_value(int&& i) {
  process_value(i);
}

int main() {
  int a = 0;
  process_value(a); // 使用左值传递
  process_value(1); // 使用右值传递
  forward_value(2); // 由右值转变为左值
}

