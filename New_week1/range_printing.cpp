#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
int m,n;
while(t--)
{
       cin>>m>>n;
       //unordered_set<int> ss;
       //bool flag=true;
       for(int i=m;i<=n;i++)
       {
           bool flag=true;
           unordered_set<int> ss;
           int j=i;
           while(j!=0)
           {
               int l = j%10;
               if(ss.find(l) != ss.end())
               {
                    flag=false;
                    break;
               }
               ss.insert(l);
               j = j/10 ;
           }
           if(flag)
           {
               cout<<i<<" ";
           }
       }
       cout<<"\n";
}
return 0;
}