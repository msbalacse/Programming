#include <bits/stdc++.h>

using namespace std;

/*
Find missing element in array

5
1 2 4 5

3

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

    // Gauss Sum Formula or Sum of the First n Natural Numbers.

    int totalSum = n * (n + 1) / 2;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << totalSum - sum << endl;

    return 0;
}