#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int size;
    cin>>size;


     int *a=new int[size];
     for(int i=0;i<size;i++)
     {
       cin>>a[i];
     }

     sort(a,a+size);
     int *b=new int[size];
     int i=0;
     int j=size-1;
     int p=0;
     while(i<j)
     {
        b[p++] = a[i++];
        b[p++] = a[j--];
     }
     if(size%2==0)
     {

     }
     else{
         b[p]=a[i];
     }
      
   for(int i=0;i<size;i++)
   {
       cout<<b[i]<<" ";
   }
   delete[] a;
   delete[] b;
   return 0;
}