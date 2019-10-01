#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    string s;
    while(q--)
    {
        int result;
         cin>>s;
       //char a='A';
       //char b='B';
       
       int countA=0;
       int countB=0;
    
       for(int i=0;i<s.size();i++){
           if(s[i]=='A'){
               countA++;
           }
           else{
               countB++;
           }
       }

       if(countA > 0 && countB==0)
       {
           result=countA-1;
           cout<<result<<"\n";
       }
       else if(countB > 0 && countA==0){
           result=countB-1;
           cout<<result<<"\n";
       }
       else{
            int starting=0;
            char search;
            if(s[starting] == 'A')
            search='B';
            else 
            search='A';
            int i=1;
            int deletioncount=0;
            int temp;
            int index;
            while(s[i]!='\0')
            {

               if(s[i] == search){
                   index=i;
                   if(index-starting == 1)
                   temp=0;
                   else 
                   temp=index-starting-1;
                   deletioncount+=temp;
                   if(search == 'A')
                   search=search+1;
                   else
                   {
                       search=search-1;
                   }  
               }
               else{
                   deletioncount++;
               }
               i++;
            }
            cout<<deletioncount<<"\n";
       }
    }
    return 0;
}

