#include <bits/stdc++.h>
using namespace std;

int a[] = {1, 25, 12, 22, 11};
int n = 5;

void selection()
{
    for (int i = 0; i < n - 1; i++)
    {
        int small_ind = i;
        for (int j = i + 1; j < n; j++)
            if (a[small_ind] > a[j])
                small_ind = j;

        int t = a[small_ind];
        a[small_ind] = a[i];
        a[i] = t;
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
    selection();
    cout << "Sorted Array" << endl;
    display();
    return 1;
}