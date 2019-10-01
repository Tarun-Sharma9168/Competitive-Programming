#include<bits/stdc++.h>
using namespace std;
int makecount(int arr[],int m);
int  main()
{
    int n;
    int m;

    cin>>n>>m;
    char  arr[n][m];
    int dim=(n*(n-1))/2;
    char third[dim][m];
    char newarray[dim];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    int w=0;
    for(int k=0;k<n;k++)
    {
    for(int i=k+1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            third[w][j]=arr[k][j] ||arr[i][j];
        }
        w++;
    }
    }
    for(int i=0;i<dim;i++)
    {
        newarray[i]=makecount(third[i],m);
       cout<<newarray[i]<<endl;
    }
    cout<<endl;

    int* p;
    p=std::max_element(newarray,newarray+dim);
    int result_of_queens=*p;
  cout<<*p<<"\n";

   int no_of_max=count(newarray,newarray+dim,result_of_queens);
   cout<<no_of_max<<"\n";
  return 0;   
}

int makecount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    return count;
}