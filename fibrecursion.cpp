#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n;
    cin>>n;

    auto start = high_resolution_clock::now(); 
    cout<<fib(n)<<"\n";
    auto stop =  high_resolution_clock::now();

    auto duration=duration_cast<microseconds> (stop-start);

    cout<<duration.count()<<"\n";
    return 0;   
}