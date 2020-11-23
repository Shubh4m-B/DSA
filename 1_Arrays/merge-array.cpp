// Merge two sorted arrays into a single sorted array

// This logic/code is used in the merge sort algorithm

#include <bits/stdc++.h>
using namespace std;

int a[] = {1, 3, 5, 7, 9};
int b[] = {0, 2, 4, 4, 6, 8};
int c[11];

void merge_array(int l, int m, int n)
{
    // Copy the smaller of the two elements from the two arrays into the third array
    // until one of the array gets exhausted
    int k = 0, i, j;
    for (i = 0, j = 0; i < l, j < m;)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // Copy the remaining elements of the othe array
    if (i == l)
    {
        while (j < m)
        {
            c[k++] = b[j++];
        }
    }
    else
    {
        while (i < l)
        {
            c[k++] = a[i++];
        }
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
    cout << "Array 1\n";
    display(a, 5);
    cout << "Array 2\n";
    display(b, 6);
    merge_array(5, 6, 11);
    cout << "Merged Array\n";
    display(c, 11);
    return 1;
}