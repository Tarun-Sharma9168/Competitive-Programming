#include<iostream>
#include<algorithm>
using namespace std;
int msb(long long int n)
{
  int msb_p=-1;
  while(n)
  {
    n = n >> 1;
    msb_p++;
  }
return msb_p++;
}
long long int andOperator(long long int x,long long int y)
{
   long long int res = 0;
   while(x && y)
   {
      long long int msb_p1 = msb(x);
      long long int msb_p2 = msb(y);
      if(msb_p1 != msb_p2)
      {
           break;
      }
      long long int msb_val = (1 << msb_p1);
      res = res + msb_val;
      x = x - msb_val;
      y = y - msb_val;
   }
   return res; 
}
int main()
{
int n;
cin>>n;
long long int a;
long long int b;
while(n--)
{
    cin >> a >>b;
    cout<<andOperator(a,b)<<"\n";   
}
return 0;
}
