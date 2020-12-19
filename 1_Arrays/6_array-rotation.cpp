#include <bits/stdc++.h>
using namespace std;

void rotate_left(int a[], int n, int r)
{
    int m, j;
    for (int i = 0; i < r; i++)
    {
        m = a[0];
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = m;
    }
}
void rotate_right(int a[], int n, int r)
{
    int m, j;
    for (int i = 0; i < r; i++)
    {
        m = a[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = m;
    }
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
    rotate_left(arr, n, 2);
    display(arr, n);
    rotate_right(arr, n, 4);
    display(arr, n);

    return 0;
}
