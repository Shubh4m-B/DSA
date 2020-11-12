#include <iostream>
#include <conio.h>

using namespace std;
int n = 5;

void insert(int pos, int arr[], int val)
{
    int i;
    n += 1;
    for (i = n - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = val;
}

void display(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int pos = 3, val = 10;

    display(arr);
    insert(pos, arr, val);
    display(arr);

    return 0;
}
