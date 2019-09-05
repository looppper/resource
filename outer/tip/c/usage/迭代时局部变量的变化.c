/*
 * writer: undergo
 * date:   21 Frebruary, 2017, 14:31
 *
 *
 * Feature: 测试迭代时局部变量的变化
 */
#include <stdio.h>


int test(int, int);

int main()
{
  int var = 0;
  int fre = 5;

  printf("%d\n", test(var, fre));
}


int test(int var, int fre)
{
  ++var;

  printf("%d\n", var);

  if (fre > 0)
    test(var, --fre);

  return var;
}

/*
 *  测试结果:
              1
              2
              3
              4
              5
              6
              1
    结论:   外层变量可以在内层使用,但是内层变量不能回到外层
            即层与层之间只能通过函参传递值

            由于局部变量存在栈中，调用后即销毁，所以不能在函数之间进行传递

  */
