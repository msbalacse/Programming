#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row;
    cin >> row;

    for (int i = 0; i <= row; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // Print spaces.
        int spaces = 2 * (row - i);
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }

        // Print right side stars.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << "* ";
        }

        int space = 2 * (i + 1);

        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < row - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/*
    Enter the Number of rows - 6
Butterfly Pattern of 6 rows.
*                         *
* *                     * *
* * *                 * * *
* * * *             * * * *
* * * * *         * * * * *
* * * * * *     * * * * * *
* * * * * * * * * * * * * *
* * * * * *     * * * * * *
* * * * *         * * * * *
* * * *             * * * *
* * *                 * * *
* *                     * *
*                         *

*/