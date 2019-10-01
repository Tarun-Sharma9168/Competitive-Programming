    /*
    #include<iostream>
    #include<algorithm>
    #include <set>
    using namespace std;
    int main()
    {
        int arr[100];
        int brr[100];
        set<int> unique_element;
        int n;
        cin>>n;
        int arr[n];
        int element;
        for(int i=0;i<n;i++)
        {
            cin>>element;
            element=element%100;
            arr[element]++;

        }
    

        int m;
        cin>>m;

        int brr[m];


    
        int max_printing=m-n;
        for(int j=0;j<m;j++)
        {
            cin>>element;
            element=element%100;
            brr[element]++;
        }

        //sort(arr,arr+n);
        //sort(brr,brr+m);

    /*   for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        for(int j=0;j<m;j++){
            cout<<brr[j]<<" ";
        }

        cout<<"\n";
        */
       /* int j=0;
        int i=0;
        int count=0;
        while(i<m && j<n && count < max_printing){
            if(arr[j] == brr[i]){
                i++;
                j++;
            }
            else{
                count++;
                unique_element.insert(brr[i]);
                //cout<<brr[i]<<" ";
                i++;
            }

        }

        for(auto it=unique_element.begin();it!=unique_element.end();it++){
            cout<<*it<<" ";
        }
    return 0;
    }
*/


    #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;

        int arr[n];
    // int max=-1e9;
        //int min=1e9;
        int element;
        int most_imp[10001]={0};  
        for(int i=0;i<n;i++)
        {
        cin>>element;
        most_imp[element]--;
        }
        //int index_main_array1=max-min+1;
        int m;
        cin>>m;

        int brr[m];
        //max=-1e9;
        //min=1e9;

        for(int i=0;i<m;i++)
        {
        cin>>element;
        most_imp[element]++;
        }
    //int index_main_array2=max-min+1;
    //int arr2[index_main_array1];
    //int brr2[index_main_array2];

    for(int i=0;i<10001;i++)
    {
        if(most_imp[i]>0){
            cout<<i<<" ";
        }
    }
    return 0;
    }