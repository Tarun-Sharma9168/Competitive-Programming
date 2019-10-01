/*very important concept in this question we have to find the digit sum in the decimal number
which is base 10 which can be obtained by taking the modulo by 9 in base 10 format which is the generalisation 
also that if you wan to find the sum of digit of any base k just taking the modulo by k-1 */

#include<bits/stdc++.h>
using namespace std;
int super_digit(string n,int k){
   long long int sum=0;
    for(int i=0;i<s.length();i++){
        sum=sum+(s[i]-'0')%9;
    }
    return sum%9;
}
int main()
{
   string s;
   int k


   cin>>s;

   cin>>k;


   if(k%9==0){
       cout<<"9"<<"\n";
   }
   else{
          int result=super_digit(s,k);

          original_sum=(result*k)%9;
          cout<<original_sum<<"\n";
       }
   return 0;
}
