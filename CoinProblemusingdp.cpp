#include<iostream>
#include<chrono>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
vector<int> coin_available;
vector<int> table(9999,0);//unbound vectors are dangerous
vector<bool> check(9999,false);
int solve(int x)
{
   // cout<<"I am solving 10"<<"\n";
    int best=1e9;
    if(x  < 0) 
    {
        return 1e9;
    }
    if(x == 0)
    {
        return 0;
    }
   //   cout<<"I am solving 10"<<"\n";
    if(check[x])
    {
        return  table[x];
    }
    //cout<<"BALLU"<<"\n";
    //int best=INFINITY;
   //     cout<<"I am solving 10"<<"\n";
    for(auto c:coin_available)
        {
            //cout<<"Coin "<<" "<<c<<"\n";
            best=min( best , solve(x-c)+ 1 );
        }
               // min(best,solve)
        table[x]=best;
        check[x]=true;              
        return best;    
}
int main()
{

    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        coin_available.push_back(element);
    } 
    int sum;
    cin>>sum;
   // bool ready[sum+1];
    //for(int i=0;i<=n;i++)
    //{
      //  ready[i]=false;
    //}
    //cout<<"I am in"<<"\n";


    int  result=solve(sum);

    cout<<result<<"\n";
    return 0;
}