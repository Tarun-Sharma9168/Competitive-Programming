#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int sum=0;
    int i=0;
    long long int newpower;
    while(sum<t)
    {
        newpower=pow(2,i);
        sum+=3*newpower;
        i++;
    }
    if(t<=3)
    {
        cout<<4-t<<"\n";
    }
    else
    {  
    int requiredindex=sum-newpower+1;
    
    int required_difference=t-requiredindex;

    int result=newpower-required_difference;

   cout<<result<<"\n";
    }
return 0;
}