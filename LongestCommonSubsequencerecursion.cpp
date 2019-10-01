#include<iostream>
#include<chrono>
#include<vector>
using namespace std;
vector<int> values_available;
int length(int k)
{
   if(k==0)
   {
       return 1;
   }
   else
   {
       int max_value=1;
       for(int i=k-1;i>=0;i--)
       {
          if(values_available[i] < values_available[k])
          {
             max_value= max(max_value,length(i)+1);
          }
       }     
          return max_value;   
       }
   }
   
int main()
{
    
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++)
    { 
        cin>>element;
        values_available.push_back(element); 
    }
  for(int i=0;i<n;i++)
  {
    cout<<length(i)<<" ";
  }
return 0;
}

