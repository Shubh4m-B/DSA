#include <iostream>

using namespace std;

int a[] = {1, 4, 5, 5, 7, 8, 1, 9, 5, 6};
int n = 10;

void remove_duplicate(int b[])
{
    int m = 0;
    b[m++] = a[0];
    for (int i = 1; i < n; i++)
    {
        int duplicate = 0, temp = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp == a[j])
                duplicate = 1;
        }
        if (duplicate == 0)
            b[m++] = a[i];
    }
}
void display(int b[], int n)
{
    cout << "Original Array";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Modified Array";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
int main()
{
    int b[n] = {0};
    remove_duplicate(b);
    display(b, n);

    return 0;
}
