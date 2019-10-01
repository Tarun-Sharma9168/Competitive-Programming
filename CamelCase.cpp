#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int size=s.size();
    int count1=0;
    //int count2=0;
    if(s[0]>=97 && s[0]<=122)
    {
        count1++;
    }
    else
    {}
    
    
    for(int i=1;i<size;i++)
    {
    
         if(s[i]>=65 && s[i]<=90)
         {
             count1++;
         }
            
    }

    cout<<count1<<"\n";
return 0;
}
