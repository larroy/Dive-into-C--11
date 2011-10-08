#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    vector<int> vi;
    vi.push_back(5);
    vi.push_back(4);
    vi.push_back(3);
    for_each(vi.begin(), vi.end(), [](int i) {
        cout << i << endl;
    });
}
