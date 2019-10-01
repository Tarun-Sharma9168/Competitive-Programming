#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int n;
    int sum=0;
    int currentcount=0;
    bool flag=false;
 while(t--){
     sum=0;
     currentcount=0;
     flag=false;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
         sum+=arr[i];
     }


     for(int i=0;i<n;i++){
       if(arr[i]==sum)
       {
           cout<<"YES"<<"\n";
           flag=true;
           break;
       }

           if(currentcount == sum-(currentcount+arr[i]))
           {
               //currentcount+=arr[i];
               cout<<"YES"<<"\n";
               flag=true;
               break;
           }
           else{
               currentcount+=arr[i];
           }
    }
           if(!flag)
               cout<<"NO"<<"\n";

}
return 0;
}