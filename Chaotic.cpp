#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int sum=0;
    int difference;
    int new_difference;
    int no_of_changes_positive;
    int no_of_changes_negative;
    int bribe_count=0;
    //int actual_bribe;
    //int p[]={0,1,2,3,4}
    bool flag=false;
    while (t--)
    {
         bribe_count=0;
         sum=0;
         flag=false;
         no_of_changes_negative=0;
         no_of_changes_positive=0;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         for(int i=0;i<n;i++)
         {
           sum+=a[i];
         }
         for(int i=0;i<n;i++)
         {
            difference=sum-a[i];//always positive
            new_difference=sum-difference;
            if(((new_difference-1)-i)<0)
            {
                no_of_changes_negative=abs((new_difference-1)-i);
                no_of_changes_positive=0;
                //cout<<"negative "<<no_of_changes_negative<<"\n";
            }
            else
            {
                no_of_changes_positive=abs((new_difference-1)-i);
                no_of_changes_negative=0;
            }   
            //cout<<"Number of Changes negative is"<<no_of_changes_positive<<"\n";
            //cout<<"Number of Changes postive is"<<no_of_changes_negative<<"\n";
            if(no_of_changes_positive > 2)
            {
                flag=true;
                //cout<<"Too chaotic"<<"\n";
                break;
            } 
            else
            {
                bribe_count=bribe_count+no_of_changes_negative;
                //cout<<"bribe count"<<bribe_count<<"\n";
            }
            //no_of_changes_positive=0;
           //no_of_changes_negative=0;
            //flag=false;
         }
         if(flag)
         {
             cout<<"Too chaotic"<<"\n";
         }
         else
         {
              cout<<bribe_count<<"\n";
         }
    }
    return 0;
}