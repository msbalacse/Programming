#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    int sum = 0;
    for (int e : arr)
    {
        sum += e;
    }

    cout << "Array of Sum : " << sum << endl;

    return 0;
}