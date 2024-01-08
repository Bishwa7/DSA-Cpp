#include <bits/stdc++.h>
using namespace std;

//printing array function
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"    Done"<<endl;
    //cout<<endl;
}

int main()
{
    // 1st array
    int arr1[10];
    printArray(arr1,10);
    
    
    
    // 2nd array
    int arr2[3]={5,7,11};
    cout<<endl;
    
    
    
    // 3rd array
    int arr3[15]={2,7,};
    printArray(arr3,15);
    
    
    
    // 4th array
    int arr4[10]={0};
    printArray(arr4,10);
    
    
    // 5th array
    int arr5[10]={5};
    printArray(arr5,10);
    
    
    
    // 6th array
    int arr6[10];
    for(int i=0;i<10;i++)
    {
        arr6[i]=5;
    }
    printArray(arr6,9);
    
    int sixth = sizeof(arr6) / sizeof(int);               // Size of array (6th array) 
    cout<<"Size of 6th array = "<<sixth<<endl;
    
    
    
    // Different types of arrays
    
    char array1[5] = {'a','b','c','d','e'};
    cout<<array1[3]<<endl;
    
    float array2[5];
    double array3[5];
    bool array4[5];
    
    
    cout<<"Everything OK"<<endl;
    
    return 0;
}
