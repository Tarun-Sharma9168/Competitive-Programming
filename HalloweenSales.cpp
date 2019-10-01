#include<iostream>
using namespace std;
int main()
{
    int p_initial,d_decrement_amount,minimum,s_of_money;
     
    cin>>p_initial>>d_decrement_amount>>minimum>>s_of_money;


    int sum=p_initial;
    int count=0;
    
     if(s_of_money == p_initial)
     {
         cout<<"1"<<endl;
     }
      s_of_money-=p_initial;
    while(s_of_money>=0 )
    {
        p_initial=p_initial-d_decrement_amount;
        if(p_initial>=minimum)
        {
        sum+=p_initial;
        s_of_money=-p_initial;
        count+=1;
        }
        else
        {
            s_of_money-=minimum;
        }
    }
   cout<<count+1<<endl;
    return 0;
}