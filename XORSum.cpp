#include<iostream>
using namespace std;
//the value of A[x] is a periodic function and it is periodic with respect to 8;
long long int sum_of_xor(long long int x)
{
    int a=x%8;

    if(a==0|| a==1){
        return x;
    }   
    if(a==2 || a==3){
        return 2;
    }

    if(a==4 || a==5){
        return x+2;
    }
    if(a==6 || a==7){
        return 0;
    }
    return 0;
}

//this is also imp if you want to find the G(X)
//it will find in terms of l & R only
//G(L,R)=G(R)^G(L-1)
//as input is very high 10^15 we donot take linear approach this is constant order solution
int main()
{
    int t;
    cin>>t;
    long long int i,j;
    long long int result;
    while(t--)
    {
        cin>>i>>j;
    
        result=G(j)^G(i-1);
        cout<<result<<"\n";
    }
    return 0;
}