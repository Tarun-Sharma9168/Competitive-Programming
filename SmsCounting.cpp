#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    bool certain_flag=false;
    int count;
    int main_count=0;
    string sp[12]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",""," ","" };
    while(t--)
    {
        string Sms;
        getline(cin , Sms);
        
        for(int i=0;i<Sms.size();i++)
        {
            certain_flag=false;
            for(int k=0;k<12;k++)
            {
                for(int j=0;j<sp[k].size();j++)
                {
                      if(Sms[i]==sp[k][j])
                      {
                          count=j+1;
                          certain_flag=true;
                          break;
                      }
                }
                      if(certain_flag==true)
                      {
                          break;
                      }
            }
            main_count+=count;
        } 
  cout<<"Main Count"<<main_count<<"\n";
    }
    return 0;
}