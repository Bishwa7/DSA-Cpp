#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[100]={1,0,-4,-22,33,6,7,99,21,5,50};
    int key;
    cout<<"Enter element to find = ";
    cin>>key;
    
    bool found = search(arr,11,key);
    
    if(found)
    {
        cout<<"Element is present";
    }
    else
    {
        cout<<"Element is not present";
    }

    return 0;
}