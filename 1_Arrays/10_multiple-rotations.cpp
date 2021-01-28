#include <bits/stdc++.h>
using namespace std;

void createTemp(int arr[], int n, int temp[])
{
    for (int i = 0; i < n; i++)
        temp[i] = temp[i + n] = arr[i];
}
void printRotations(int arr[], int n, int k, int temp[])
{
    int start = k % n;
    for (int i = start; i < start + n; i++)
        cout << temp[i] << " ";

    cout << endl;
}
int main()
{
    int arr[] = {3, 5, 1, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[2 * n];

    createTemp(arr, n, temp);

    int k = 2;
    printRotations(arr, n, k, temp);

    k = 3;
    printRotations(arr, n, k, temp);

    k = 6;
    printRotations(arr, n, k, temp);

    return 0;
}