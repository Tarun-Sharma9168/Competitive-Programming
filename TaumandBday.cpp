#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,w;
        cin>>b>>w;

        int bc,wc,z;

        cin>>bc>>wc>>z;
        int result=0;
        if(bc <wc)
        {
           result=b*bc;

           if((bc+z)<wc)
           {
               result+=w*(bc+z);
           }
           else
           {
               result+=w*wc;
           }
           
        }
        else if(bc==wc)
        {
            result=(b+w)*bc;
        }
        else {
            result=w*wc;

            if((wc+z)<bc){
                result+=b*(wc+z);
            }
            else
            {
                
                    result+=b*bc;
            }
            
        }

        cout<<result<<"\n";
    }
    return 0;
}