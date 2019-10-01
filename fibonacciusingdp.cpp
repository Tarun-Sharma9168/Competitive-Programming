#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
int dynamicfibo(int n)
{
    int memarray[n+1]={ };
    if(n==0 || n==1)
    {
        return n;
    }

    else
    {
        if(memarray[n-1]==0)//this is what we implement one time evaluate policy 
        {
            //cout<<"You are in first"<<"\n";
            memarray[n-1]=dynamicfibo(n-1);//if dont there evaluate but next time only check if it is in a array
        }
        if(memarray[n-2]==0)
        {
            //cout<<"You are in Second"<<"\n";
            memarray[n-2]=dynamicfibo(n-2);
        }
        memarray[n]=memarray[n-1]+memarray[n-2];
        return memarray[n];
    }   
}
int main()
{
    int n;
    cin>>n;
    auto start = high_resolution_clock::now(); 
    cout<<dynamicfibo(n)<<"\n";
    auto stop =  high_resolution_clock::now();

    auto duration=duration_cast<microseconds>(stop-start);

    cout<<duration.count()<<"\n";
        return 0;
}