#include <iostream>
#include <vector>
#include <string>
using namespace std;

void eater(const std::string&& s)
{
    cout << "I eat strings: " << s << endl;
}

int main(int argc, char *argv[])
{
    eater(string("omg"));
    
    string hard("hard to swallow");
    // this one won't compile, since we can't make a rvalue reference from an lvalue
#if 0
    eater(hard);
#endif

    eater(std::move(hard));
    // hard remains a valid string but contents are unspecified
    //

    vector<int> some1 = {1, 2, 3};
    cout << static_cast<const void*>(&some1[0]) << endl;

    vector<int> some2 = some1;
    cout << static_cast<const void*>(&some2[0]) << endl;

    // moved_some1 could point to the same data as some1, depending on the move
    // ctor implementation. With g++4.6.2 it does.
    vector<int> moved_some1 = std::move(some1);
    cout << static_cast<const void*>(&moved_some1[0]) << endl;
}
