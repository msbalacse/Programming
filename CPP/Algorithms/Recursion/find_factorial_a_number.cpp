#include <iostream>

using namespace std;

int findFactorial(int n)
{
    if (n == 1)
        return 1;
    return n * findFactorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int result = findFactorial(n);
    cout << result << endl;
    return 0;
}