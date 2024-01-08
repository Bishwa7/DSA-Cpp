#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    
    return sum;
}

int main()
{
    int size;
    cout<<"Enter size of array = ";
    cin>>size;
    
    int arr[1000];
    cout<<"Enter array elements = ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Sum of the Array = "<<sumArray(arr,size)<<endl;

    return 0;
}