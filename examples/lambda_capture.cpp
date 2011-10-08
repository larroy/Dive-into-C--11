#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

    size_t sum = 0;

    for_each(vi.begin(), vi.end(), [&](int i) {
        sum += i;
    });

    cout << sum << endl;
}
