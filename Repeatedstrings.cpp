#include<bits/stdc++.h>
using namespace std;
int countfrequency(string);
int main()
{
    
    string s;
    long int  n;
    long int result;
    int anothercount=0;
    cin>>n;
    getline(cin,s);

    int stringlength=s.length();
    long int zaroorat=n %(stringlength);
     int counter=countfrequency(s);
    if(zaroorat == 0)
    {
       
         result=(counter)*(n/(stringlength));
        cout<<result<<"/n";
    }
    else
    {
       
        int extra=zaroorat;
        for(int i=0;i<extra;i++)
        {
            if(s[i]=='a')
            {
             anothercount++;
            }
        }
        result=(counter)*(n/(stringlength))+anothercount;
        cout<<result<<"/n";

    }
    

return 0;
}
int countfrequency(string p)
{
    int count=0;
    int newlength=p.length();
     for(int i=0;i<newlength;i++)
    {
        if(p[i]=='a')
        {
            count++;
        }
    }
    return count; 
}
