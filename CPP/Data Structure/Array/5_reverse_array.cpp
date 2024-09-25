#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(50);
    arr.push_back(10);
    arr.push_back(80);

    size_t n = arr.size();

    // reverse(arr.begin(), arr.end());

    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }

    for (int num : arr)
    {
        std::cout << num << " ";
    }

    return 0;
}