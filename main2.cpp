#include <iostream>
#include <functional>
#include <algorithm>
//#include <boost/bind.hpp>

using namespace std;
//using namespace boost;
int fun(int x, int y) { return x + y; }

class Add
{
public:
    double operator()(double x, double y)
    {
        return x + y;
    }
};

int TestFunc(int a, char c, float f)
{
    cout << a << endl;
    cout << c << endl;
    cout << f << endl;

    return a;
}

int main()
{

    // int m = 1;
    // int n = 2;
    // cout << boost::bind(fun, _1, _2)(m, n) << endl;

    Add plus;
    //cout << plus(12.6, 2.4) << "\n";
    //cout << Add()(13.9, 26.8) << "\n";

    auto result = std::plus<int>{}(1, 2);
    //auto res2 = std::bind1st(equal_to<int>(), 10);

    equal_to<int> functor = equal_to<int>(); //防函数
    //cout << std::to_string(functor(10, 20));
    const int a = 20;

    auto bindFunc1 = bind(TestFunc, std::placeholders::_1, 'A', 100.1);
    //cout << std::to_string(bindFunc1(10));

    const int b = std::max(10, 3000);
    cout << b;

    return 0;
}