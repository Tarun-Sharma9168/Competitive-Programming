#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;

   cin>>n>>k;
   vector<pair<int,int>> l_t;
   vector<int> one_counting;
   //vector filling
   int count=0;
   long long int sum=0;
   vector<vector<int>> contests(n);
    for (int i = 0; i < n; i++) {
        contests[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> contests[i][j];
        }
    }
   for(int i=0;i<n;i++)
   {
        l_t.push_back( make_pair(contests[i][0],contests[i][1]) ); 
   }

for(int i=0;i<n;i++)
   {
       sum+=l_t[i].first;
       if(l_t[i].second==1){
           one_counting.push_back(l_t[i].first);
           count++;
       } 
   }
   int contest_can_win=count-k; 
   if(k==0)
   {
       for(int i=0;i<n;i++)
       {
       //sum+=l_t[i][0];
       if(l_t[i].second==1){
           sum-=2*(l_t[i].first);
          } 
       }
   cout<<sum<<"\n";
    }
    else if(k>=count ||count==0 )
   {
     cout<<sum<<"\n";
   }
   else
   { 
   //sort(l_t.begin(),l_t.end());
     sort(one_counting.begin(),one_counting.end());
   //Counting how many important contests are there 
   
   int p_pilloo=0;
   int i=0;
  while((i<n) && (p_pilloo<contest_can_win))
  {
   //if(l_t[i].second==1)
   //{
    sum-=2*(one_counting[i]);  
   //}
   i++;
   p_pilloo++;
  }

  cout<<sum<<"\n";
   
}
return 0;
}
