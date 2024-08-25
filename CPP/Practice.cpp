#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, s;
    cin >> n >> s;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int j = i;
        int v = 0;
        while (v < s)
        {
            v += arr[j];
            j = (j + 1) % n;

            if (v == s)
            {
                break;
            }
        }

        if (v == s)
        {
            cout << (i + 1) << " " << (j + 1) << endl;
            break;
        }
    }

    return 0;
}