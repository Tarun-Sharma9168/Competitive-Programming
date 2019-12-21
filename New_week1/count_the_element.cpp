#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int q;
    while(t--)
    {
        map<int,int> mm;
         cin>>n;
         int A[n];
         int B[n];
         for(int i=0;i<n;i++)
         {
             cin>>A[i];
         }
         for(int i=0;i<n;i++)
         {
             cin>>B[i];
         }
         int rep[1000001]={0};
         for(int i=0;i<n;i++)
         {
             rep[B[i]]++;
         }
         int grt[1000001]={0};
         grt[0]=rep[0];
         for(int i=1;i<1000001;i++)
         {
             grt[i]=rep[i]+grt[i-1];
         }
         int a;
         cin>>q;
         while(q--)
         {
           cin>>a;
           cout<<grt[a]<<"\n";
         }
         cout<<"\n";
    }
    return 0;
}