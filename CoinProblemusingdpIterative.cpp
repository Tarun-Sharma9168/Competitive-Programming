#include<iostream>
#include<chrono>
#include<vector>
using namespace std;
vector<int> coin_available;//we have to use the iterative implementation of dp because it has low contant factors 
int main()
{
   int n;//coin_available
   cin>>n;
   int element;
   for(int i=0;i<n;i++)
   {
       cin>>element;
       coin_available.push_back(element);
   }
   int t;
   cin>>t;//parameter value you want to generate
   vector<int> values(9999,0);

values[0]=0;
for(int x=1;x<=t;x++){
   values[x]=1e9;
   for(auto c:coin_available){
       if(x-c >=0)//not approach the negative value means if one rupee we have to generate it does not go towards 3
       {
           values[x]=min(values[x],values[x-c]+1);
       }
   }
}

for(int i=0;i<=t;i++)
{
    cout<<values[i]<<" ";
}
return 0;
}