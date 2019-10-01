#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;


    int arr[n];
    vector<int> support;
    bool var=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            if(arr[i]==arr[j])
            {
                var=true;
                int joko=j-i;
               support.push_back(joko);
            }
        }
    }

    if(var)
    {
    auto p=std::min_element(support.begin(),support.end());
    cout<<*p<<" ";
    }
    else {
        cout<<"-1"<<endl;
    }
    return 0;
}