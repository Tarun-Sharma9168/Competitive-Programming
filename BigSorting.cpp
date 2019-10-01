#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    vector<string> unsorted(n);
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;

        unsorted.push_back(s);
    }

    vector<int> int_vector;
   int p;
    for(int i=0;i<n;i++)
    {
      p=stoi(unsorted[i]);

      int_vector.push_back(p);
    }


    sort(int_vector.begin(),int_vector.end());


     for (auto i = int_vector.begin(); i != int_vector.end(); ++i) 
        cout << *i <<"\n"; 
    return 0;
}