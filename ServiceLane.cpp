#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    int p,q;
    cin>>n>>t;
    int arr[n];
    int *tptr;
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(t--)
    {
        tptr=NULL;
       //int arr[n];
       //int x

    //int p,q;
    cin>>p>>q;
    
    tptr=std::min_element(arr+p,arr+q+1); 
    cout<<*tptr<<"\n";
    }
    return 0;
}