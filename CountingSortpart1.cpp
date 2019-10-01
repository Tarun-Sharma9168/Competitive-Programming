#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[100];

   for(int i=0;i<100;i++){
       arr[i]=0;
   }
   int element;
   for(int i=0;i<n;i++)
   {
    cin>>element;
    arr[element]++;
   }

 for(int i=0;i<100;i++)
 {
     cout<<arr[i]<<" ";
 }
   return 0;
}