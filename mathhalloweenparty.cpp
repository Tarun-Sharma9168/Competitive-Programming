#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int k;
    int first_result;
    int second_result;
    long long int main_result;
    cin>>t;
    while(t--)
    {
        cin>>k;
        first_result=k/2;
        second_result=k-first_result;
        main_result=first_result*second_result;

        cout<<main_result<<"\n";
    }    
    return 0;
}