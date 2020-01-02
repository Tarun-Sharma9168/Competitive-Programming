#include<iostream>
#include<bitset>
using namespace std;
int check(int x)
{
    bitset<32> b1(x);
    return b1.count();//gives you the number of set bits
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt","r",stdin); 
    int t;
    cin>>t;
    int n;
    int i;
    while(t--)
    {
       cin>>n;
       i=n-32;
       if(i<0)
           i=0;
       for(;i<n;i++)
       {
           if(i+check(i) == n)
           {
               break;
           }
       }    
       if(i == n )
       {
           cout<<"1"<<"\n";//Means it is a Bleak Number
       }
       else
       {
           cout<<"0"<<"\n";
       }
    }
return 0;
}
