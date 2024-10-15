#include <iostream>
#include <vector>

using namespace std;

int findKthIndex(const vector<int> &arr, int k)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
            return i;
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int kthIndex = findKthIndex(arr, k);
    cout << kthIndex << endl;
    return 0;
}