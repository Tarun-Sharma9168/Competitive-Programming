#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];


   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    sort(arr,arr+n);

   int arr2[100];
   for (int i = 0; i < 100; i++)
   {
       /* code */
       arr2[i]=0;
   }
   
   for(int i=0;i<n;i++)
   {
       arr2[arr[i]]++;
   }

   int *ele=std::max_element(arr2,arr2+100);

   int new_comer=*ele; 
   int result=n-new_comer;

   cout<<result<<"\n";
   return 0;
}