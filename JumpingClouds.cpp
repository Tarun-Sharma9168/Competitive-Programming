#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int n;
    cin>>n;
    bool arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;)
    {
        if(arr[i+1]==0 && arr[i+2]==0)
        {
            i=i+2;
            count++;
            if(i==n)
            break;
        }

        else if(arr[i+1]==0 && arr[i+2]==1)
        {
            i=i+1;
            count++;
            if(i==n)break;
        }
        else
        {
            i=i+2;
            count++;
            if(i==n)break;
        }
        
    }
    cout<<count<<"\n";
    return 0;
}