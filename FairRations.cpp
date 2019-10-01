#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isodd(int n);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int N;
    int count_even;
    int count_odd;
    int min_count_breads;
    int sum=0;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    //sort(arr,arr+n);
    for(int i=0;i<N;i++)
    {
      sum+=arr[i];
    }

   if(sum%2!=0)
   {
       cout<<"NO"<<"\n";
   }
   //sort(arr,arr+n);
   else
   {
       int i=0;
        sort(arr,arr+N);
        //auto maxi = std::min_element(arr, arr+n);
        //return names[maxi - arr];
        while(i<N)
        {
            if(isodd(arr[i]))
            {
           arr[i]=arr[i]+1;
           arr[i+1]=arr[i+1]+1;
           min_count_breads+=2;
           i++;
            }
            else
            {
                i++;
            }
        }

        cout<<min_count_breads<<"\n";
   }
   
return 0;
}
bool isodd(int n)
{
    if(n%2==0)  {return false;}
    else
    {
        return true;
    }
}