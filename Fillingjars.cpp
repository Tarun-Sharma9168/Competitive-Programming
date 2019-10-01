#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N,M;
   cin>>N>>M;
   int t1,t2,t3;
  double sum=0;
   int count=0;
   while(M--)
   {
    cin>>t1>>t2>>t3;

    count=t2-t1+1;
    sum+=count*t3;
   }    

   cout<<floor(sum/N)<<"\n";
   return 0;
}