    #include<iostream>
    #include<vector>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;

        int a[n];
        //vector<int> counting_minimum;
        int min=1e9;
        long long int sum;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<=0)
            {
            sum=abs(a[i]-a[j]);
            //counting_minimum.push_back(sum);
            if(sum<min)
            {
                min=sum;
            }
            }
            else{
                if(abs(a[i]-a[j]) > min)
                {
                    break;
                }
                else
                {
                    min=abs(a[i]-a[j]);
                }
                
            }
        }
    }
    //auto minim=min_element(counting_minimum.begin(),counting_minimum.end());
    //cout<<*minim<<"\n";
    cout<<min<<"\n";
    return 0;
    }