#include<iostream>
#include<bits/stdc++.h>
bool happycheckup(char arr[],int n,int index);
bool checkunderscore(char arr[],int n);
using namespace std;
int main()
{
     int g;
     int n;
    cin>>g;

    while(g--)
    {
        bool flag=false;
        cin>>n;
        char arr[n];
         int pointerchecker=0;


        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(checkunderscore(arr,n))
        {
        sort(arr,arr+n);
        /* for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }*/
        if(arr[pointerchecker]=='_')
        {
            cout<<"YES"<<"\n";
        }
        else
        {
    while(pointerchecker<n && arr[pointerchecker]!='_')
        {
            if(happycheckup(arr,n,pointerchecker)){
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }           
            pointerchecker++;
        }
        if(flag){
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        }
    }
    else{
        while(pointerchecker<n)
        {
            if(happycheckup(arr,n,pointerchecker)){
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }           
            pointerchecker++;
        }
        if(flag){
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    }
return 0;
   //char a='-';
   //cout<<a<<endl;
}
bool happycheckup(char arr[],int n,int index){
    if(index==0)
    {
       
        if(arr[index+1]==arr[index])
       {
           return true;
       }
       else{
           return false;

       }
    }
    else if(index==n-1){
        if(arr[index-1]==arr[index])
       {
           return true;
       }
       else{
           return false;

       }
    }
    else
    {
        if(arr[index-1]==arr[index] || arr[index+1]==arr[index])
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    
}
bool checkunderscore(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='_')
        {
            return true;
        }
    }
    return false;
}
