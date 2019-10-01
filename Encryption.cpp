#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    getline(cin,s);
    
    s.erase(remove(s.begin(),s.end(),' '),s.end());

  int p=s.length();
 // cout<<p<<"\n";

  //cout<<s<<"\n";


   float sqrtvar=sqrt(p);
   int l_b=floor(sqrtvar);
   int u_b=ceil(sqrtvar);

   //cout<<u_b<<"\n"<<l_b<<endl;

    
    if((l_b *u_b)<p)
    {
        l_b=l_b+1;
    }
    
      char arr[l_b][u_b];
    //char newarr[l_b][u_b];
    /*  for(int i=0;i<l_b;i++)
     {
       for(int j=0;j<u_b;j++)
       {
           newarr[i][j]=arr[i][j]='a';
       }
   }
 */

  /*  for(int i=0;i<l_b;i++)
   {
       for(int j=0;j<u_b;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
   }
  */
   
     int i=0;
     int j=0;
     int newboy=0;
   while(s[newboy]!='\0'&& i<l_b)
   {
       j=0;
       while(j<u_b)
       {
       arr[i][j]=s[newboy];
       newboy++;
       j++;
       }
       i++;
   }
/*  for(int i=0;i<l_b;i++)
   {
       for(int j=0;j<u_b;j++)
       {
           //cout<<arr[i][j]<<" ";

           newarr[i][j]=arr[i][j];
       }
       //cout<<"\n";
   }

*/
 /*   for(int i=0;i<l_b;i++)
   {
       for(int j=0;j<u_b;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
   }
   */
   for (int i=0;i<u_b;i++)
   {
       for(int j=0;j<l_b;j++)
       {
           if(arr[j][i]==NULL)
           {
                  break;
           }
           {
                  cout<<arr[j][i];
             }
       }
       cout<<" ";
   } 
   return 0;
}