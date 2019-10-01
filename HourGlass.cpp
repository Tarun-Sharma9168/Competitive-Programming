#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }

    int p=0;
    int sum=0;
    int max=-9999;
    int q=0;
    while(q<=3)
    {
        sum=0;
        p=0;
    while(p<=3)
    {
        sum=0;
    for(int i=q;i<3+q;i++)
    {
        for(int j=p;j<3+p;j++)
        {
           if(i==q+1 && (j==p ||j==p+2))
           {}
           else
           {
               sum=sum+arr[i][j];
           }
    }
    }
    //cout<<"sum of first hour glass is "<<sum<<endl;
    if(sum>max)
    {
        max=sum;
    }
        p++;
    }
    q++;
    }
cout<<max<<"\n";
return 0;
}