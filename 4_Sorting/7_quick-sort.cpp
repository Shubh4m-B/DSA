#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int i = start - 1; //Index of smaller element

    for (int j = start; j < end; j++)
    {
        // If the element is smaller than the pivot
        if (a[j] < pivot)
        {
            i++; //Increment index of smaller element
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[end];
    a[end] = temp;
    return (i + 1);
}

void quick_sort(int a[], int start, int end)
{
    if (start < end)
    {
        // generate the partition index
        int part_ind = partition(a, start, end);

        quick_sort(a, start, part_ind - 1);
        quick_sort(a, part_ind + 1, end);
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
    int a[] = {12, 56, 32, 67, 21, 78, 45, 56, 34, 10};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Unsorted array:\n";
    display(a, n);
    quick_sort(a, 0, n - 1);
    cout << "Sorted array:\n";
    display(a, n);
    return 1;
}