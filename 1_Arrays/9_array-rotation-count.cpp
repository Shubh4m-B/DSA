// Consider an array of distinct numbers sorted in increasing order.The array has been rotated(clockwise) k number of times.Given such an array, find the value of k.

#include <bits/stdc++.h>
using namespace std;

// Complexity O(n)

// int rotationCount(int a[], int n)
// {
//     int k = 0, small = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (small > a[i])
//         {
//             small = a[i];
//             k = i;
//         }
//     }
//     return k;
// }

// Complexity O(log n)

int rotationCount(int a[], int low, int high)
{
    // when low > high
    if (low > high)
        return 0;

    if (low == high)
        return low;

    int mid = (low + high) / 2;

    // when a[mid+1] < a[mid]
    if (a[mid + 1] < a[mid])
        return (mid + 1);

    // when a[mid-1] > a[mid]
    if (a[mid - 1] > a[mid])
        return mid;

    // recursive step
    // if a[high] < a[mid]
    if (a[high] < a[mid])
        return rotationCount(a, mid + 1, high);

    // else
    return rotationCount(a, low, mid - 1);
}

int main()
{
    int arr[] = {20, 22, 25, 26, 27, 28, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nThe given array has been rotated " << rotationCount(arr, 0, n - 1) << " times. ";
    return 0;
}
