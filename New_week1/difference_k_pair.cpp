#include<iostream>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
int function_that_counts(int *arr,int n,int k)
{
    int count(0);
    map<int,int> mp;
    set<pair<int,int>> res;
    for(int i=0;i<n;i++)
    {
       mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        int remaining=arr[i]+k;
        if(k==0)//very important condition
        {
            if(mp.find(remaining) != mp.end() && mp[arr[i]] > 1)
            {
                res.insert(make_pair(arr[i],remaining));
                count++;
            }
        }
        else
        {
            if(mp.find(remaining)!=mp.end())
            {
                res.insert(make_pair(arr[i],remaining));
                count++;
            }
        }
    }
    return res.size();
}
int main()
{
    int t;
    cin>>t;
    int n;
    int k;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        cout<<function_that_counts(arr,n, k)<<"\n";
    }
    return 0;
}