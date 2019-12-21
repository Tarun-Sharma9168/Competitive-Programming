#include <bits/stdc++.h>
using namespace std;
int main() 
{
 long long i,a,b,max,k,t,q;
cin>>t;
 while(t--)
{
     q=0;
     max=1;k=1;
     string s1,s2;
     cin>>s1>>s2;
    a=s1.size();b=s2.size();
  
    
for(i=0;i<b;i++)
{
    if(s2[i]=='1')q=1;
}
if(q==0)
{
    cout<<0<<endl;
    continue;
}
for(i=0;i<min(a,b);i++)
{
    if(s1[a-1-i]=='1' && s2[b-1-i]=='1')
    {
     k++;   
    }
    if( k>1 && ((s1[a-1-i]=='0' && s2[b-1-i]=='1') || (s1[a-1-i]=='1' && s2[b-1-i]=='0')))
    k++;
    else if(k>1)
    {
       if(s1[a-1-i]=='1' && s2[b-1-i]=='1' ){if(k>max)max=k-1;k=2;}
   else   
        {
           if(k>max)max=k;k=1;}
        }
}
if(k>max){max=k;}
if(a<b)
{
    while(i<b && k>1)
    {
        if(s2[b-1-i]=='1')
        k++;
        else break;
        i++;
    }
}
if(k>max){max=k;}

if(b<a)
{
    
    while(i<a && k>1)
    {
        if(s1[a-1-i]=='1')
        k++;
        else break;
        i++;
    }
}
if(k>max){max=k;}
     cout<<max<<endl;
 }
	return 0;
}
