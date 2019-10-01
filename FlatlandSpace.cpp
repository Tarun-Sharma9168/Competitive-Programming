#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[m];
   // vector<int> myvector;
    int myarr[m];
    int last_array[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            myarr[j]=(abs(i-a[j]));
        }
        int *p=min_element(myarr,myarr+m);
        
    last_array[i]=*p;
    }
    int *q=max_element(last_array,last_array+n);
   cout<<*q<<"\n";

   return 0;
}