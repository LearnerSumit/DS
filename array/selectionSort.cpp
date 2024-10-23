#include <iostream>
using namespace std;

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

    int a[] = {1, 5, 2, 3, 7};
    int size = sizeof(a) / sizeof(a[0]);

    printArray(a,size);

    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size-1;j++){
            if(a[min_index] > a[j]){
                min_index = j;
            }
        }
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }

    printArray(a,size);

    return 0;
}