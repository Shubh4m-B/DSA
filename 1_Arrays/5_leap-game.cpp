// Follow the link given in the README.md file to view the full HackerRank Problem

// Sample Input

// 4
// 5 3
// 0 0 0 0 0
// 6 5
// 0 0 0 1 1 1
// 6 3
// 0 0 1 1 1 0
// 3 1
// 0 1 0

// Sample Output

// YES
// YES
// NO
// NO

#include <bits/stdc++.h>
using namespace std;

bool win(int a[], int i, int n, int leap, int flag)
{
    // base condition
    if ((i == n - 1) || (i + leap >= n))
        return true;

    // move condition
    if (a[i + leap] == 0)
    {
        if (win(a, i + leap, n, leap, 0))
            return true;
    }

    if (a[i + 1] == 0 && flag != 1)
    {
        if (win(a, i + 1, n, leap, 0))
            return true;
    }

    if (a[i - 1] == 0 && i > 0)
    {
        if (win(a, i - 1, n, leap, 1))
            return true;
    }

    return false;
}

int main()
{
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int n, leap;
        cin >> n;
        cin >> leap;
        if (leap == 1)
            leap = 1;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (win(a, 0, n, leap, 0))
            cout << "WIN";

        else
            cout << "LOOSE";
    }
    return 1;
}