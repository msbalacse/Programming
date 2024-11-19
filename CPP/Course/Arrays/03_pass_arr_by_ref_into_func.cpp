#include <iostream>
using namespace std;

void printArray(int &arr)
{
    int n = sizeof(arr) / sizeof(int);
    // In print array function hold pointer memory
    cout << "In Function " << n << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    // In main function arr is original
    cout << "In Main " << n << endl;
    printArray(&arr);
    return 0;
}