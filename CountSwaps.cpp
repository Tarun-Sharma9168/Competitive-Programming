#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    int optimisation_factor=0;
    int swap_count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-optimisation_factor-1;j++)
        {
            if(a[j]>a[j+1])
            {
            swap_count++; 
            swap(a[j],a[j+1]);
            }
        }
        optimisation_factor++;
    
    }

    cout<<"Array is sorted in "<<swap_count<<" swaps."<<"\n";
    cout<<"First Element: "<<a[0]<<"\n";
    cout<<"Last Element: "<<a[n-1]<<"\n";  
    return 0;
}