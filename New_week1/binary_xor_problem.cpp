#include<bits/stdc++.h>

using namespace std;

const int   N   = 1e5 + 1;
const int   mod = 1e9 + 7;

int mul(int a,int b)    {
    return  1ll *  a * b % mod;
}
int Pow(int a,int b)    {
    int ans = 1;
    while (b)   {
        if(b & 1)   ans = mul(ans,a);
        a = mul(a,a);   b >>= 1;
    }
    return  ans;
}

int Fac[N];
int Inv[N];

int Ckn(int n,int k)    {
    return  mul(Fac[n],mul(Inv[k],Inv[n - k]));
}

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    Fac[0] = Inv[0] = 1;

    for(int i = 1 ; i < N ; ++i)    
    Fac[i] = mul(Fac[i - 1],i); 
    Inv[N - 1] = Pow(Fac[N - 1],mod - 2);

    //cout<<"third"<<" "<<Fac[N-1]<<"\n";
    //cout<<"first"<<" "<<Inv[N-1]<<"\n";

    //cout<<"second"<<" "<<mod - 2<<"\n";
    for(int i = N - 2 ; i ; --i)    
    Inv[i] = mul(Inv[i + 1],i + 1);

    int itest;
    cin >> itest;

    while (itest--) {
        int n;      cin >> n;
        string s;   cin >> s;
        string t;   cin >> t;

        int c0 = 0;
        int c1 = 0;

        for(char x : s) c0 += (x == '1');
        for(char x : t) c1 += (x == '1');

        int hig = min(c0 + c1,n + n - c0 - c1);
        int low = max(c0 - c1,c1 - c0);
        int ans = 0;

        for(int i = low ; i <= hig ; i += 2)    {
            ans += Ckn(n,i);
            if (ans >= mod)
                ans -= mod;
        }

        cout << ans << "\n";
    }
}