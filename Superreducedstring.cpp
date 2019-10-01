#include<iostream>
using namespace std;
int main()
{
    
    string inp;
    getline(cin,inp);
    int i=0;
    int size=inp.size();

    while(i<size-1)
    {
        //cout<<inp[i]<<"  ";
          if(inp[i]==inp[i+1])
         {
             if(size==2)
             {
                 break;
             }
             else{
                    for(int k=i+2;k<size;k++)
                      {
                         inp[k-2]=inp[k];
                      }
                        size=size-2;
                        i=0;
                 }
         }
         else
         {
             i++;
         }
         /* for(int t=0;t<size;t++)
         {
              cout<<inp[t]<<" ";
         }  
         cout<<"\n";
         */    
    }

int p=0;
if(size==2)
{
    cout<<"Empty String"<<"\n";
}
else
{
 while(p<size)
    {
        cout<<inp[p];
          /* if(inp[i]==inp[i+1])
         {
             inp[i]=inp[i+1]=0;
         }
        i++;
    }
    */
   p++;}
}
    return 0;
}