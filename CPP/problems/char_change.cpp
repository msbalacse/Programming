#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    char c;
    char r;

    cin >> str >> c >> r;

    for (int i = 0; i < str.length(); i++)
    {
        if (c == str.at(i))
        {
            str.at(i) = r;
        }
    }

    // for (auto i : str)
    //     cout << i << endl;

    cout << str << endl;

    return 0;
}