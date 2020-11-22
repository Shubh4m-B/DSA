#include <bits/stdc++.h>
using namespace std;

int a[] = {64, 56, 78, 99, 45};
int n = 5;

void bubble_sort()
{
    for (int i = 0; i < n - 1; i++)
    {
        int swap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                swap++;
            }
        }
        if (swap == 0)
            return;
    }
}

void display()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    cout << "Unsorted Array" << endl;
    display();
    bubble_sort();
    cout << "Sorted Array" << endl;
    display();
    return 1;
}