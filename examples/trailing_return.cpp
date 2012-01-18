#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T, typename U>
auto add(T t, U u) -> decltype(t+u)
{
    return t+u;
}

int main(int argc, char *argv[])
{
    auto res = add(5, 3);
    cout << typeid(res).name() << endl;
}
