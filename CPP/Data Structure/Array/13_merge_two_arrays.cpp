#include <iostream>
#include <vector>

using namespace std;

void printArr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a1, a2;
    vector<int> arr1(a1);
    vector<int> arr2(a2);

    for (int i = 0; i < a1 - 1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < a2 - 1; i++)
    {
        cin >> arr2[i];
        arr1.push_back(arr2[i]);
    }

    printArr(arr1);

    return 0;
}