#include <iostream>
#include <vector>

using namespace std;

void merge(std::vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1; // Size of left half
    int n2 = right - mid;    // Size of right half

    // Create temporary arrays
    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftArr if any
    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightArr if any
    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2; // To prevent overflow

        mergeSort(arr, left, mid);      // Sort first half
        mergeSort(arr, mid + 1, right); // Sort second half

        merge(arr, left, mid, right); // Merge sorted halves
    }
}

int main()
{
    vector<int> arr = {234, 324, 262, 6345, 29375, 1, 62, 73, 79, 1, 45, 745};

    mergeSort(arr, 0, arr.size());
    cout << arr[arr.size() - 1] << endl;
    return 0;
}