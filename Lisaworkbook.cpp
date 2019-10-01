#include<iostream>
using namespace std;
int main()
{
       int n,k;

       cin>>n>>k;

       int arr[n];

       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }   
       
       int page=0;
       int special=0;
       for(int i=0;i<n;i++)
       {
           page=page+1;
       for(int j=1;j<=arr[i];j++)
       {
           if(k==1)
           {
               if(j>k){page=page+1;}
               if(j==page){special++;}
           }else
           {
           
           if(j>k && j%k==1){page=page+1;}

           if(j == page)
           {
             special++;
           }

           }
       }
       }
       cout<<special<<"\n";
return 0;
}