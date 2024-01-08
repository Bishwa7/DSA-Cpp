#include <iostream>
using namespace std;

void reverseSwap(int arr[], int size)
{
    for(int start=0,end=size-1; start<=end; start++,end--)
    {
        swap(arr[start],arr[end]);
    }
}

void reverseFor(int arr[], int size)
{
    for(int i=size-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int arr[1000]={1,2,3,4,5,6,7,8,9};
    
    reverseSwap(arr,9);
    printArray(arr,9);
    
    int arr1[1000]={5,6,7,8,9};
    reverseFor(arr1,5);

    return 0;
}