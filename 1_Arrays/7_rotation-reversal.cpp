#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int start, int end)
{
    int t;
    for (int i = start, j = end; i <= (start + end) / 2; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}

void left_rotate(int a[], int n, int m)
{
    reverse(a, 0, m - 1);
    reverse(a, m, n - 1);
    reverse(a, 0, n - 1);
}

void right_rotate(int a[], int n, int m)
{
    reverse(a, 0, n - 1);
    reverse(a, 0, m - 1);
    reverse(a, m, n - 1);
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);
    left_rotate(arr, n, 3);
    display(arr, n);
    right_rotate(arr, n, 5);
    display(arr, n);

    return 0;
}