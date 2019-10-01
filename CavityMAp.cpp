#include<cstdio>
#include<iostream>
using namespace std;
//bool adjacencycheck(int a,int b,int n,int **arr);
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin>>n;

    char a[n][n];
    char p[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            p[i][j]=a[i][j];
        }
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
             if( ( a[i][j]-48 > a[i-1][j]-48 ) && (a[i][j]-48 > a[i+1][j]-48) && (a[i][j]-48 > a[i][j+1]-48)  && (a[i][j]-48 > a[i][j-1]-48) )
             {
                 p[i][j]='X';
             }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j];
        }
        cout<<"\n";
    }
    return 0;
}

