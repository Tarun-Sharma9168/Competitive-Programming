#include<iostream>
#include<algorithm>
using namespace std;
int median(int arr[],int n){
     float median=0.0;
     int index;
    if(!(n & 2)){
         index=n/2;
         median=(arr[index]+arr[index-1])/2;
      return median;
    }
    else{
       index=n/2;
       return arr[index];
    }
}
int main()
{
    int n,d;
    cin>>n>>d;

    int arr[n];

    int notifications=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    sort(arr,arr+n);
    

    
}