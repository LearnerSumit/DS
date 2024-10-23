#include <iostream>
using namespace std;

int count = 5;

void insertValStart(int a[], int val, int size)
{
    for (int i = size; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = val;
}

void insertValInGivenPosition(int a[],int val,int position,int size){
    for(int i=size;i>position;i--){
        a[i] = a[i-1];
    }
    a[position] = val;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    int size = sizeof(a) / 4;
    printArray(a, size);
    // insertValStart(a, 5, size);
    insertValInGivenPosition(a,4,2,size);
    printArray(a, size);
    return 0;
}
