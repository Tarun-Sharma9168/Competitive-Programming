#include<bits/stdc++.h>
using namespace std;
int max_of_xor_value(int L, int R) 
{ 
	// get xor of limits 
	int LXR = L ^ R; 

	// loop to get msb position of L^R 
	int msbPos = 0; 
	while (LXR) 
	{ 
		msbPos++; 
		LXR >>= 1; 
	} 
	int maxXOR = 0; 
	int two = 1; 
	while (msbPos--) 
	{ 
		maxXOR += two; 
		two <<= 1; 
	} 

	return maxXOR; 
} 
int main()
{
    int l;
    int r;
    cin>>l>>r;
    cout<<max_of_xor_value(l,r);
    return 0;
}