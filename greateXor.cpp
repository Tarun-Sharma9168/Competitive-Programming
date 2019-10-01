/*The tricky question of the bit manipulation using the built in function given by the gcc comiler
__builtin_clz(unsigned x)  used to find the leading zeroes in the binary number */


/* another important thing is if we have the number x=12 which is 10 x=1010 which 4 digit binary code
we can generate every possible combination of that is upto the 1111 by xoring with the x=10 where a should
0 <a< x .*/


#include<iostream>
using namespace std;
int main()
{
    int q;
    long long int x;
    cin>>q;
    while(q--){

        cin>>x;

        long long int result;

        result=(pow(2,64- __builtin_clzll(x))-x-1)
        //we can generate this much number after reducing the given count that 0<=x<=n
        cout<<result<<"\n";
    }
    return 0;
}