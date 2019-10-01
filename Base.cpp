#include<iostream>
#include<algorithm>
#include<vector>
#include<chrono>
#include<set>
#include<unordered_set>
#include<unordered_map>
using namespace std;
//typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int,int> pi;
//#define F first
//#define S second
//#define PB push_back
//#define MP make_pair
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    //int a,b;

    //scanf("%d %d",&a,&b);
    //printf("%d %d\n"a,b);
    //string s;
    //getline(cin,s);
    //If cin is used getline() then you have to include cin.ignore function
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>s;

    string p=s;
    cout<<p<<"\n";

    cout<<&p<<"\n";
    cout<<&s<<"\n";
    s[3]='p';

    cout<<p<<"\n";

    cout<<s<<"\n"; 
    return 0;
}