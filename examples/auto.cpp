#include <iostream>
#include <typeinfo>
using namespace std;
int main(int argc, char *argv[])
{
    // pointer of induced type
    auto* i = new auto(1);
    cout << *i << endl;

    // i should be of type int*
    cout << typeid(i).name() << " as expected? "
        << ((typeid(i) == typeid(int*)) ? "yes" : "no") << endl;

    delete i;
}

