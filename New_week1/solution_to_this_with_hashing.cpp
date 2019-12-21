#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int a;
	cin >> a;
	while(a--){
	  int n1,n2;
	  cin>>n1>>n2;
	  int arr1[n1],arr2[n2];
	  int s1=0;int s2=0;
	  for(int i = 0 ; i < n1 ; i++){
	      cin>>arr1[i];
	      s1+=arr1[i];
	  }
	  for(int i = 0 ; i < n2 ; i++){
	      cin>>arr2[i];
	      s2+=arr2[i];
	  }
	  int diff = (s1-s2)/2;
	      unordered_map<int,int> mapp;
	      for(int i = 0 ; i < n2 ; i++)
	      mapp[arr2[i]]++; 
	      int g = 0;
	        
	       for(int i = 0 ; i < n1 ; i++)
	       if(mapp.find(arr1[i]-diff) != mapp.end()){
	       g=1;
	       break;
	       }
	       
	       if(g == 1)
	       cout <<"1"<<endl;
	       else
	       cout<<"-1"<<endl; 
	 
	}
}