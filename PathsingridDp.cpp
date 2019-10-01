#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> grid_values(9999,vector<int>(9999));
vector<vector<int>> sum_values(9999,vector<int>(9999));
int sum(int i,int j,int n)
{
    if(i==0 || j==0)
    {
        sum_values[i][j]=0;
    }

for(int x=1;x<=n;x++)
{
    for(int y=1;y<=n;y++)
    {
        sum_values[x][y]=max(sum_values[x][y-1],sum_values[x-1][y])+grid_values[x][y];
    }
}
return sum_values[i][j];
}

int main()
{

int n;
cin>>n;
int element;
grid_values.resize(n+1);
for(int i=0;i<=n;i++)
{
    grid_values[i].resize(n+1);
}

for(int i=0;i<=n;i++)
{
    for(int j=0;j<=n;j++)
    {
        grid_values[i][j]=0;
        sum_values[i][j]=0;
    }
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cin>>element;
        cin>>grid_values[i][j];
    }
}
//int dparraysum[n+1][n+1];

int indexi;
int indexj;


cin>>indexi;
cin>>indexj;
cout<<"I am here"<<"\n";
cout<<sum(indexi,indexj,n)<<"\n";
return 0;
}

