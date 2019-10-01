#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int n,a,b;
    while(T--)
    {
      //int n;
      //int a;
      //int b;
       cin>>n>>a>>b;
       long long int sum=0;
       int no_of_times_loop_runs=n-1;
       int p=no_of_times_loop_runs;
       vector<int> printrequirement;
       if(n==1){
           cout<<"0"<<endl;
       }
       else{
       if(a==b)
       {
         sum=p*a;
         cout<<sum<<"\n";
       }
       else
       {
       
       for(int i=0;i<=no_of_times_loop_runs;i++)
       {
            sum=(p)*a+i*b;
            p--;
            printrequirement.push_back(sum);
       }
        sort(printrequirement.begin(),printrequirement.end());
        for(auto i=printrequirement.begin();i<printrequirement.end();i++)
        {
          cout<<*i<<" ";
        }     
        cout<<"\n";
      }
       }
    }
    return 0;
}