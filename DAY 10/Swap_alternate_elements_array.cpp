#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100] = {2,3,4,5,6,7,8,9,10};
    int size =9;

    for(int i=0; i<size;i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    cout<<endl;

    return 0;
}