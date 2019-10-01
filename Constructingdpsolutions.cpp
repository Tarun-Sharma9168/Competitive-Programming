/*
This is the dp use to generate all the possible solutions that are their here dont talk about optimal but here motive
is we have to generate all the possible solutions.
Here we generate how many to generate a sum using given number of coins 
*/
#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
vector<int> coin_available;
int main()
{
int n;
int m;
cin>>n;
cin>>m;
int element;
for(int i=0;i<m;i++)
{
    cin>>element;
    coin_available.push_back(element);
}
vector<int> values_count(9999,0);
vector<bool> unit_count(9999,false);
values_count[0]=1;

//int way_count_of_number;
//cin>>way_count_of_number;
for(int i=1;i<=n;i++)
{
    for(auto c:coin_available)
    {
    if(i-c >=0)
    {
        values_count[i]+=values_count[i-c];
    }
    }

}

for(int i=0;i<=n;i++)
{
    cout<<values_count[i]<<" ";
}
return 0;
}
