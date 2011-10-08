#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    auto lambda = [](int i) -> int { return i * 2; };
    int a = 5;
    int b = lambda(a);
    
    cout << b << endl;
}
