#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    vector<int> vi = {1, 2 ,3};

    size_t sum = 0;

    for_each(vi.begin(), vi.end(), [&](int i) {
        sum += i;
    });

    cout << sum << endl;
}
