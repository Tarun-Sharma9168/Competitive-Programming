#include<iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
//int best=1e9;
vector<int> coin_available;
int solve(int x)
{
    int best=1e9;
if(x<0){
    //cout<<"I am in First"<<"\n";
    return 1e9;
}
else if(x==0){
    //cout<<"I am in Second"<<"\n";
    return 0;
}
else
{
    //cout<<"I am in third"<<"\n";
    for(auto c:coin_available){
        //cout<<c<<"\n";
        best=min(best,solve(x-c)+1);
    }
    return best;
}
}
int main()
{
    int n;
    cin>>n;
    int element;
    //vector<int> coin_available;
    for(int i=0;i<n;i++)
    {
       cin>>element;
       coin_available.push_back(element); 
    }
    int sum;
    cin>>sum;

    auto start=high_resolution_clock::now();
    int result=solve(sum);
    auto stop=high_resolution_check::now();

    auto duration=duration_cast<microseconds>(stop-start);
    cout<<result<<"\n";
    cout<<duration.count()<<"\n";
    return 0;
}
