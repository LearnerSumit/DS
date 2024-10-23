#include <iostream>
using namespace std;

int count = 5;

void printArray(int arr[])
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteAt(int a[], int val)
{
    int i;
    for ( i = 0; i < count; i++)
    {
        if (a[i] == val)
        {
            break;
        }
    }
    if (i == count)
    {
        cout << "Element not available"<<endl;
        return;
    }

    for (int j = i; j < count - 1; j++)
    {
        a[j] = a[j + 1];
    }
    count--;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    printArray(a);
    deleteAt(a, 2);
    printArray(a);

    return 0;
}