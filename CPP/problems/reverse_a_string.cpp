#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        swap(str[i], str[len - i - 1]);
    }

    cout << str << endl;

    return 0;
}