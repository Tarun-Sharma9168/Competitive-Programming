#include<bits/stdc++.h>
using namespace std;
#define N 30 
int main()
{
    vector<string> wordings(N);
    wordings={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half"};
    int h;//inputs
    int m;//inputs
    int difference;
    cin>>h>>m;


   if((m<30 && m>1 && m!=15) && h!=0 )
   {
        cout<<wordings[m-1]<<" minutes past "<<wordings[h-1]<<"\n";
   }
   if((m<30 && m>1 && m==15) && h!=0)
   {
       cout<<wordings[m-1]<<" past "<<wordings[h-1]<<"\n";
   }
   if(m==30 && h!=0)
   {
       cout<<wordings[m-1]<<" past "<<wordings[h-1]<<"\n";
   }
   if((m>30) && h!=0)
   { 
      difference=60-m;
      
      if(difference == 1)
      {
      cout<<wordings[difference-1]<<" minute to "<<wordings[h]<<"\n";   
      }
      else if(difference==15)
      {
          cout<<wordings[difference-1]<<" to "<<wordings[h]<<"\n";
      }
      else 
      {
      cout<<wordings[difference-1]<<" minutes to "<<wordings[h]<<"\n";
      }
   }
   if(m==0 && h!=0)
   {
     cout<<wordings[h-1]<<" o' clock "<<"\n";
   }
   if(m==1 && h!=0)
   {
       cout<<wordings[h-1]<<" minute past "<<wordings[h-1]<<"\n";
   }

   return 0;}