#include <bits/stdc++.h>

using namespace std;

/*
    check whether the given string is a palindrome or not
*/

int main()
{
    string str;

    cin >> str;

    string dupStr = str;

    int len = dupStr.length();

    for (int i = 0; i < len / 2; i++)
    {
        swap(dupStr[i], dupStr[len - i - 1]);
    }

    if (str == dupStr)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}