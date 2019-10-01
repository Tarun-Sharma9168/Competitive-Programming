#include<iostream>
using namespace std;
int main()
{
    //use unsigned long long if you are very sure that you are 
    // dealing with signed integers anymore.
   unsigned long long int n;
    cin>>n;
    unsigned long long int unset_bits=0;
    while(n)
    {
    if((n & 1) == 0)
    {
        unset_bits++;
        //n=n>>1;//Right shift
    }
    n=n>>1;
    }    //formula for counting number of unset bits in a number
    //next step is to find the i which satisfy the consitions 
    //n+i=n^i
    //n+i=(n^i) + (n&i)
    //so finding the i where (n&i)==0 is also the problem of our solution
    //and to find this we have to find the no of unset bits in n;
    //2^(no of unset bits is our solution)


    unsigned long long int result;
    result= (1L << unset_bits);//left shift 

    cout<<result<<"\n";
return 0;
}