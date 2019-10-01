#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[3];
    int max=-99999;
    while(t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }

        sort(a,a+3);

        cout<<a[1]<<"\n";
    }
    return 0;
}