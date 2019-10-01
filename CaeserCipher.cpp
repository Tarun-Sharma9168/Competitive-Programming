#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size_string;
    cin>>size_string;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin,s);
    int rotation_count;
    cin>>rotation_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int p;
    for(int i=0;i<s.length();i++)
    {
          p=s[i];
         if(p==45){}
         if(p>=65 && p<=90)
         {
             if(p+rotation_count > 90){
              s[i] = ((p+rotation_count)%90)+64;
              }
              else{
                  s[i]=p+rotation_count;
              }
         }
         if(p>=97 && p<=122)
         {
             if(p+rotation_count > 122){
              s[i] = (((p+rotation_count)%122)+96);
              }
              else{
                  s[i]=p+rotation_count;
              }
         }
    }

   //int  c='a';
   //int  C='-';

   //char p;
   //p=65;
   //cout<<p<<"\n";
  // cout<<c<<"\n";
 //  cout<<C<<"\n";

   cout<<s;
   return 0;
}