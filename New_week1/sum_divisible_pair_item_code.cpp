#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int k;
    while(t--)
    {
         int sum=0;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             sum+=arr[i];
         }
         cin>>k;
         if((sum % k) == 0 && (n %2 == 0) && (sum >= k * (n/2)))
         {
             cout<<"True"<<"\n";
         }
         else
         {
             cout<<"False"<<"\n";
         }
    }
    return 0;
}