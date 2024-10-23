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
    int a[] = {1,5,2,3,7};
    int size = sizeof(a)/sizeof(a[0]);

    printArray(a,size);

    for(int i=1;i<size-1;i++){
        int value = a[i];
        int hole = i;

        while(hole>0 && (a[hole-1]>value)){
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole]=value;
        
    }

    printArray(a,size);

}