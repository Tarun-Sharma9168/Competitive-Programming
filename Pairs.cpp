#include<iostream>
using namespace std;
int main()
{
    int n,target_value;
    cin>>n;
    cin>>target_value;
    int count=0;

    long long int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]-a[j])==target_value)
            {
                count++;
                break;
            }
            if((a[i]-a[j])>target_value)
            {
                break;
            }
        }
    }
cout<<count<<"\n";
    return 0;
}