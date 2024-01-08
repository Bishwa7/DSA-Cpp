#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        int start=1;
        for(int j=1; j<=n-i+1; j++)             // 1st triangle
        {
            cout<<start;
            start++;
        }
        
        for(int k=1; k<i; k++)              // Star triangle
        {
            cout<<"*";
        }
        
        for(int l=1; l<i; l++)
        {
            cout<<"*";
        }
        
        
        
        int start1=n-i+1;
        for(int m=1; m<=n-i+1; m++)          // last triangle
        {
            cout<<start1;
            start1--;
        }
        
        
        
        cout<<endl;
    }




    return 0;
}