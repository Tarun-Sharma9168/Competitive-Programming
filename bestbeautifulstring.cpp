#include<iostream>
using namespace std;
int main()
{
    int n;//length of the substring
    string s;
    cin>>n;
    cin>>s;
    //cout<<n<<"\n";
    //cout<<s<<"\n";
    char subs[]="010";
    int p=0;
    int count=0;
    int q=0;
    for(int i=0;i<s.size()-2;)
    {        
        for(int j=i;j<i+3;j++)
        {
            if(s[j] == subs[p])
            {
                q++;    
                p++;
            }
        }
        if(q==3){count++;
        i+=3;
        }
        else{i++;}
        p=0;
        q=0;
    }


    {cout<<(count)<<"\n";}
return 0;
}
