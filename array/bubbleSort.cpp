#include<iostream>
using namespace std;


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    
    int a[] = {14,2,3,5,7};

    int size = sizeof(a) / sizeof(a[0]);

    for(int i=0;i<size-1;i++){
        for(int j = 0; j < size - i - 1; j++) {  // Prevent out-of-bounds access
        if(a[j] > a[j + 1]) {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
    }
    printArray(a,size);

 
    return 0;

}