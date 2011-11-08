#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    vector<int> vi = {5, 4 ,3};
    for_each(vi.begin(), vi.end(), [](int i) {
        cout << i << endl;
    });
}
