#include <fstream>
#include <mutex>

struct Base {
    int n;
    Base(int n) : n(n) {}
};

struct Class : public Base      // 继承
{
    unsigned char x;
    unsigned char y;
    std::mutex m;
    std::lock_guard<std::mutex> lg;
    std::fstream f1, f2;

  // 有关不同依赖成员的初始化顺序问题
    Class ( int x )
      : Base ( 123 ), // 初始化继承类
        x ( x ),      // x (member) is initialized with x (parameter)
        y { 0 },      // y initialized to 0
        f1{"test.cc", std::ios::app}, // this takes place after m and lg are initialized
        f2("test.bin", std::ios::binary|std::ios::app),
        lg ( m ),      // lg uses m, which is already initialized
        m{}            // m is initialized before lg even though it appears last here
    {}                // empty compound statement

    Class ( double a )
      : Base ( 0 ),
        y ( a+1 ),
        x ( y ), // x will be initialized before y, its value here is indeterminate
        lg ( m )
    {} // base class constructor does not appear in the list, it is
       // default-initialized (not the same as if Base() were used, which is value-init)

    Class()
    try // function-try block begins before the function body, which includes init list
      : Base ( 789 ),
        x ( 0 ),
        y ( 0 ),
        lg ( m )
    {
        // ...
    }
    catch (...)
    {
        // exception occurred on initialization
    }
};

int main() {
    Class c;
    Class c1(1);
    Class c2(0.1);
}
