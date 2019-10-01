#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,c,m;
    int sum=0;
    int next;
    int nex,nex2;
    while(t--)
    {
        sum=0;
    cin>>n>>c>>m;

    if(n<c){
     cout<<"0"<<"\n";
    }
     
    else
    {
      int res_interval=n/c;
     // int pes_interval=n%c; 
     //next=res_interval;
     //sum+=res_interval;
        if(res_interval < m)
         {  
             cout<<res_interval<<"\n";
         }
    else
    {
        sum=sum+res_interval;
        while(res_interval>=m) 
         {
            //sum+=res_interval;

             nex=res_interval/m;
             nex2=res_interval%m;
             sum+=nex; 
             next=nex+nex2;
             //cout<<next<<"\n";
             res_interval=next;
            //pes_interval=next%m; 
        
         }
       cout<<sum<<"\n";
    }
    }
    }
    return 0;
}