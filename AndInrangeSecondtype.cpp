#include<iostream>
using namespace std;
long long int AndInRange(long long int a,long long int b)
{
   while(a < b)
   {
      b = b -( b & -b);
   }
  return b;
 } 
int main()
{
  int n;
  cin>>n;
  long long int a;
  long long int b;
  while(n--)
  {
    cin>>a>>b;
    cout<<AndInRange(a,b)<<"\n";
  } 
  return 0;
}

