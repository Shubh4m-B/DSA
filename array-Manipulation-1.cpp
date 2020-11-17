// Starting a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

// Example
// a b k
// 1 5 3
// 4 8 7
// 6 9 1

// index->	 1 2 3  4  5 6 7 8 9 10
//         [0,0,0, 0, 0,0,0,0,0, 0]
//         [3,3,3, 3, 3,0,0,0,0, 0]
//         [3,3,3,10,10,7,7,7,0, 0]
//         [3,3,3,10,10,8,8,8,1, 0]

#include <iostream>

using namespace std;

int arrayManipulation(int a[], int b[][3], int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = b[i][0]; j <= b[i][1]; j++)
        {
            a[j - 1] += b[i][2];
        }
    }

    int large = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > large)
            large = a[i];
    }
    return large;
}

int main()
{
    //n=size of array, m=number of operations
    int n, m;
    cin >> n >> m;
    int a[n] = {0}, b[m][3];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << arrayManipulation(a, b, n, m);

    return 0;
}