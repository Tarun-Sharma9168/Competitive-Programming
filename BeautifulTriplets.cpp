#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//Inputs
    int d;//Inputs
    int count=0;//counting variable
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
   sort(arr,arr+n);//O(nlogn)
   int t=0; 
   auto p=std::max_element(arr,arr+n);//Finding max in O(n) element
   int sum = 0;
   while((arr[t]+d)<=*p)
   { 
    if(binary_search(arr,arr+n,arr[t]+d))//O(logn)
    {
        sum+=arr[t]+d;
        if(binary_search(arr,arr+n,arr[t]+2*d))
        {
             sum+=arr[t]+2*d;
             count++;
        }
    }
    t++;
   }
   cout<<count<<"\n";
    return 0;
}