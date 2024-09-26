#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {3, 4, 7, 23, 797, 34};
    int k = 5;
    vector<int> rs;

    for (int i = 0; i < arr.size(); i++)
    {
        int index = i + k;
        if (index >= arr.size())
            index %= arr.size();
        rs.push_back(arr[index]);
    }

    for (auto i : rs)
    {
        cout << i << " ";
    }

    return 0;
}