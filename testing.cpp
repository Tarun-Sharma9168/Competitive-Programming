#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        //cout<<"t"<<" "<<t<<endl;
       string s;
       cin>>s;

      s[5]='p';
      swap(s[2],s[5]);
       cout<<s<<"\n";
    }
    return 0;
}