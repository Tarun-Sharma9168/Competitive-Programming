#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a,b,x;
    long long int rem;
    long long int powervalue;
    while(n--)
    {
        cin>>a>>b>>x;
        if(b<0 && a!=1 && x!=1)
        {
            cout<<0<<"\n";
        }
        else if(a==1)
        {
            cout<<1<<"\n";
        }
        else
        {
         powervalue=pow(a,b);
         rem=powervalue%x;
         if(rem==0)
         {
             cout<<powervalue<<"\n";
         }
         else{
             if(x%2==0)
             {
                  if(rem<=x/2 )
                  {
                      cout<<powervalue-rem<<"\n";
                  }

                  else
                  {
                      cout<<powervalue+rem<<"\n";
                  }
             }
             else {
                 if(rem<=x/2){
                     cout<<powervalue-rem<<"\n";
                 }
                 else  {
                 cout<<powervalue+rem<<"\n";
                 }
                 
                   
             }
         } 
    }
    }
    return 0;
}