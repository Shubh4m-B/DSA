// Calculate the maximum possible value of sum(i*arr[i]) of an array which can be rotated

#include <bits/stdc++.h>
using namespace std;

// This is the bruteforce method.
// The complexity here is O(n^2)

/* int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += i * a[i];

    return sum;
}

void rotate(int a[], int n)
{
    int temp = a[0];
    for (int i = 0; i < n; i++)
        a[i] = a[i + 1];

    a[n - 1] = temp;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int maxSum(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        rotate(a, n);
        display(a, n);
        if (max < sum(a, n))
            max = sum(a, n);

        cout << sum(a, n) << endl;
    }
    return max;
}

int main()
{
    int arr[] = {66, 22, 89, 43, 54};
    int max = maxSum(arr, 5);
    cout << "Maximum sum of the array:" << max;

    return 0;
}*/

// This is the optimized solution with a time complexity of O(n)

int maxSum(int arr[], int n)
{
    // Find array sum and i*arr[i] with no rotation
    int arrSum = 0;
    int rotVal = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum = arrSum + arr[i];
        rotVal = rotVal + (i * arr[i]);
    }

    int maxVal = rotVal;

    for (int j = 1; j < n; j++)
    {
        rotVal = rotVal + arrSum - n * arr[n - j];
        if (rotVal > maxVal)
            maxVal = rotVal;
    }

    return maxVal;
}

int main(void)
{
    int arr[] = {66, 22, 89, 43, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nMax Sum of i*arr[i]:" << maxSum(arr, n);
    return 0;
}