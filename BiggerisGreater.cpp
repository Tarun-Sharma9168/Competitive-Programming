#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        //string s;
      //  getline(cin,s);

      cin>>s;
      //  cout<<s<<"\n";
        int p=s.length();
         int i;

   if(p>1)
   {
        for( i=p-1;p>0;i--)
            if(s[i]>s[i-1])
            break;
        if(i==0)
        {
            cout<<"no answer"<<"\n";
        }

         else if(i==p-1)
        {
            swap(s[i],s[i-1]);
            cout<<s<<"\n";
        }
        
        else 
        {
            char x=s[i-1];int smallest=i;
        for(int j=i+1;j<p;j++)
        {
            if(s[j]>x && s[j]<s[smallest])
            smallest=j;
        }  
                swap(s[smallest],s[i-1]);
              //  cout<<s<<endl;
               
            sort(s.begin()+i,s.end());

            //cout<<s<<endl;}
        
        cout<<s<<"\n";
    }
    }
   else
   {
       cout<<"no answer"<<endl;
   }
   }
    return 0;
}