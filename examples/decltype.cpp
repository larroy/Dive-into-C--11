#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    float d = 5.0;

    // the type of res is the same as in d
    // in this case is trivial but it will be useful inside templates or more
    // involved code
    decltype(d) res = d * 5;

    cout << res << endl;
}
