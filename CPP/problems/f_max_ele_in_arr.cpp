#include <bits/stdc++.h>

using namespace std;

/*
    find maximum number of elements in array
*/

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;

    for (auto i : arr)
    {
        if (max < i)
        {
            max = i;
        }
    }

    cout << max << endl;

    return 0;
}