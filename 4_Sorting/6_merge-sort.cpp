#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int m, int end)
{
    int nl = m - start + 1, nr = end - m;
    int i, j = 0, k = start;

    //define the two arrays
    int l[nl], r[nr];

    // Fill the two arrays
    for (i = 0; i < nl; i++)
        l[i] = a[k++];

    for (j = 0; j < nr; j++)
        r[j] = a[k++];

    // merge the two arrays
    k = start;
    for (i = 0, j = 0; (i < nl && j < nr);)
    {
        if (l[i] < r[j])
            a[k++] = l[i++];

        else
            a[k++] = r[j++];
    }
    while (i < nl)
        a[k++] = l[i++];

    while (j < nr)
        a[k++] = r[j++];
}

void merge_sort(int a[], int start, int end)
{
    if (start >= end)
        return;

    // Calculate the middle index so as to
    // split the array into two sub arrays
    int m = (start + end) / 2;
    merge_sort(a, start, m);
    merge_sort(a, m + 1, end);
    // call function to merge the two sub arrays
    merge(a, start, m, end);
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    int a[] = {12, 56, 32, 67, 21, 78, 45, 56, 34, 10};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Unsorted array:\n";
    display(a, n);
    merge_sort(a, 0, n - 1);
    cout << "Sorted array:\n";
    display(a, n);
    return 1;
}