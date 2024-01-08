#include <bits/stdc++.h>
using namespace std;

int maxArray(int arr[], int size)
{
    int maxi = INT_MIN;
    
    for(int i=0;i<size;i++)
    {
        maxi = max(maxi,arr[i]);
        /*if(maxi<arr[i])
        {
            maxi=arr[i];
        }    */
    }
    return maxi;
}

int minArray(int arr[], int size)
{
    int mini = INT_MAX;
    
    for(int i=0;i<size;i++)
    {
        mini = min(mini,arr[i]);
        /*if(mini>arr[i])
        {
            mini=arr[i];
        }     */
    }
    return mini;
}

int main()
{
    int size;
    cin>>size;
    
    int arr[100];
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Maximum element in the array = "<<maxArray(arr,size)<<endl;
    cout<<"Minimum element in the array = "<<minArray(arr,size)<<endl;


    return 0;
}