#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        for(int space=0; space<n-i; space++)   // Space triangle
        {
            cout<<" ";
        }
        
        int count=1;
        for(int j=1; j<=i; j++)     // 2nd triangle
        {
            cout<<count;
            count++;
        }
        
        int start=i-1;
        for(int k=1; k<i; k++)     // 3rd triangle
        {
            cout<<start;
            start--;
        }
        
        
        cout<<endl;
    }

    return 0;
}