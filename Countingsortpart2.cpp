    #include<iostream>
    #include<set>
    using namespace std;
    int main()
    {

        //set<int> distinct_element;
        int n;
        cin>>n;
        int element;
        int arr[100]={0};
        int original_array[n];
        int new_sorted_array[n];
        int max=0;
        for(int i=0;i<n;i++)
        {
        cin>>element;
        arr[element]++;
        original_array[i]=element;
        //distinct_element.insert(element);
        if(element >max){
            max=element;
        }
        }

        for(int i=1;i<=max;i++){
            arr[i]=arr[i]+arr[i-1];
            
        }
      /*  for(int i=0;i<=max;i++){
            cout<<arr[i]<<" ";
        }
       */
            for(int i=0;i<n;i++){
                new_sorted_array[arr[original_array[i]]]=original_array[i];
                arr[original_array[i]]--;
            }

            for(int i=0;i<n;i++){
            cout<<new_sorted_array[i]<<" ";
            }
    return 0;   
    }