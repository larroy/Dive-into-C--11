#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main(int argc, char *argv[])
{
    map<int, string> mi;
    mi.insert(make_pair(1,"one"));
    mi.insert(make_pair(2,"two"));
    mi.insert(make_pair(3,"three"));

    // avoid typing long iterator types, still lambdas are preferred
    for(auto i = mi.begin(); i != mi.end(); ++i)
        cout << i->first << " " << i->second << endl;

    auto i = mi.find(2);
    if (i != mi.end())
        cout << "found: " << i->second << endl;
}

