#include<iostream>
#include<set>
using namespace std;
int count_alternative(string &s,int a ,int b)
{
    bool for_a=false;
    bool for_b=false;
    int n_count_of_max_length=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==a){
        if(for_a){
            return 0;
        }
        else{
            n_count_of_max_length++;
            for_a=true;
            for_b=false;
        }
        }
        if(s[i]==b){
            if(for_b){ return 0; }
            else{
                n_count_of_max_length++;
                for_b=true;
                for_a=false;
            }
        }
    }
    return n_count_of_max_length;
}
int main()
{
   int size;
   cin>>size;

   string s;
   cin>>s;

   set<char> set;
   int comparable_becoming_maximiser=0;
   int res;
   for(auto p:s)
   {
       set.insert(p);
   }
   for(auto i:set)
   {
       for(auto j:set)
       {
           if(i==j)
           {
               continue;
           }
           res=count_alternative(s,i,j);
           if(res>comparable_becoming_maximiser)
           {
               comparable_becoming_maximiser=res;
           }
       }
   }

   cout<<comparable_becoming_maximiser<<"\n";
   return 0;
}