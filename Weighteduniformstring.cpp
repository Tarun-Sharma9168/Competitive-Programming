#include<iostream>
#include<vector>
#include "algorithm"
using namespace std;
vector<bool> weight_array(10000001);
int main()
{
    string s;
    getline(cin,s);
        

   // char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   
   // long long int same=1;
    //int in1=0;
    //int in2=0;
    //char prev;
    long long int element;
    //sort(s.begin(),s.end());
    int mul=1;
    char prev='1';
    for(int j=0; j<s.size(); j++){
        int w = s[j]-'a'+1;
        if(s[j]==prev) {mul++; w*=mul;}
        else mul=1;
        prev = s[j];
        weight_array[w] = true;
    }
    int queries;
    cin>>queries;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(queries--){
     cin>>element;
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     if(weight_array[element])
     {
         cout<<"Yes"<<"\n";
     }
     else{
         cout<<"No"<<"\n";
         }
    }
    return 0;
}