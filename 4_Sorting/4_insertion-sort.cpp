#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n)
{
    int j;
    for (int i = 1; i < n; i++)
    {
        int val = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (val < a[j])
            {
                a[j + 1] = a[j];
            }
            else
                break;
        }

        a[j + 1] = val;
    }
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