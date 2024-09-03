#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        swap(arr[small], arr[i]);
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}