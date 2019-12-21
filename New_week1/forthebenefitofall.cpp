#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n; 
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
              cin>>arr[i];
        } 
        sort(arr,arr+n);
        int how_may_pairs=0;
        int just_previous_index=0;
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            //cout<<"Ballu"<<"\n";
            int j=just_previous_index;
            flag=false;
            while(j < i && just_previous_index < i)
            {
                if((arr[j] >= ((float)arr[i]/2.0)) && (flag))
                {
                    //cout<<"Shyam"<<"\n";
                    how_may_pairs++;
                }
                if((arr[j] >= ((float)arr[i]/2.0)) && (!flag))
                {
                    //cout<<j<<" "<<i<<" ";
                    //cout<<"Ram"<<"\n";
                    how_may_pairs++;
                    just_previous_index = j;
                    flag=true;
                }
                j++;
            }
        }
        cout<<how_may_pairs<<"\n";
    }
    return 0;
}