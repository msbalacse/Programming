#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5] = {2, 3, 5}; // fixed size allocation

    for (auto i : arr)
        cout << i << endl; // 2 \n 3 \n 5 \n 0 \n 0

    vector<int> array = {2, 3, 5}; // dynamically size allocated

    for (auto i : array)
    {
        cout << i << endl; // 2 \n 3 \n 5
    }

    return 0;
}