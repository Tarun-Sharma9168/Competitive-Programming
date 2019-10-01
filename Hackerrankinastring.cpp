#include<iostream>
using namespace std;
int main()
{
    int q;
    int count=0;
    cin>>q;
    string s;
    bool flag=false;
   char arr[]="hackerrank";
   while(q--){  
    //string s;
    cin>>s;
    bool arr_for_string[10]={false};
    /*for(int i=0;i<10;i++){
        cout<<arr_for_string[i]<<" ";
    }
    */
    int p=0;
    for(int i=0;i<s.size();i++){
     if(s[i]==arr[p]){
         arr_for_string[p]=true;
         p++;
     }
    }

    for(int i=0;i<10;i++){
        if(arr_for_string[i]==true){
            flag=true;
           count++;
        }
        else{
            flag=false;
            break;
        }
    }
if(!flag){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
}
 }
return 0;
}