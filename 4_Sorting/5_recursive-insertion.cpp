#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n)
{
    //base condition
    if (n <= 1)
        return;

    //recursive call
    insertion_sort(a, n - 1);

    // last element of the array
    int val = a[n - 1], i;

    // place the last element at the correct location
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] > val)
            a[i + 1] = a[i];

        else
            break;
    }
    a[i + 1] = val;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Unsorted array:";
    display(a, n);
    insertion_sort(a, n);
    cout << "Sorted array:";
    display(a, n);

    return 1;
}