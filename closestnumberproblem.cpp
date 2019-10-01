    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;

        int arr[n];
        //int arr_new[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        /*for(auto p:arr)
        {
            cout<<p<<" ";
        }
        */
    int min=1e9;
    int impo;
    for(int i=0;i<n-1;i++)
    {
        impo=abs(arr[i+1]-arr[i]);
        if( impo < min){
            min=impo;
        }
    }


    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i+1]-arr[i])==min){
            cout<<arr[i]<<" "<<arr[i+1]<<" ";

        }
    }
    return 0;
    }