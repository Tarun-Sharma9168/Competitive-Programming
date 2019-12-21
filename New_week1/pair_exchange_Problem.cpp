#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
          cin>>n>>m;
          int arr1[n];
          int arr2[m];
          int sum1=0; 
          for(int i=0;i<n;i++)
          {
              cin>>arr1[i];
              sum1+=arr1[i];
          } 
          int sum2=0; 
          for(int i=0;i<m;i++)
          {
              cin>>arr2[i];
              sum2+=arr2[i];
          }
          //if we talk about the brute force stratergy
          //It is the O(n^2) algorithm
          bool flag = false;
          int first_elem;
          int second_elem;
          for(int i=0 ; i<n ; i++)
          {
              first_elem = arr1[i];
              for(int j=0; j<m ; j++)
              {
                  second_elem = arr2[j];
                  if((sum1 + second_elem - first_elem) == (sum2 + first_elem - second_elem))
                  {
                     cout<<"1"<<"\n";
                     flag = true;
                     break;
                  }
              }
              if(flag)
              break;
          }
          if(!flag)
          {
              cout<<"-1"<<"\n";
          }
    }
    return 0;
}