/*Optimal substructure is there so you can mould it into the dp problem which makes us to solve suproblem first
 */
#include<iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
vector<int> values_available;
int main(){

    int n;
    cin>>n;
    int element;
    vector<int> length(n,0);
    for(int i=0;i<n;i++)
    {
         cin>>element;
         values_available.push_back(element);
    }
    for(int k=0;k<n;k++)
    {
        length[k]=1;
        for(int i=0;i<k;i++)
        {
            if(values_available[i] < values_available[k])
            {
                length[k]=max(length[k],length[i]+1);
            }
        }
    }

   for(int i=0;i<n;i++)
   {
       cout<<length[i]<<" ";
   }
   return 0;
}