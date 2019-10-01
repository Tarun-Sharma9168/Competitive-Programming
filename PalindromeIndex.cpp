    #include<iostream>
    #include<algorithm>
    #include<vector>
    #include<chrono>
    #include<set>
    #include<unordered_set>
    #include<unordered_map>
    using namespace std;

    bool palindrome(string s){
        for(int i=0,j=s.length()-1;i<j;i++,j--){
            if(s[i]==s[j]){
            }
            else{
                return false; 
            }
        }
        return true;
    }
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
        
        int q;
        cin>>q;
        string s;
        //int counting=0;
        bool possible=false;
        int unequal_count=0;
        int newesti=0;
        int newestj=0;
        int length;
        int new_p=0;
        int new_q=0;
        int calculative;
        while(q--)
        {
            possible=false;
        cin>>s;
        length=s.length();
        if(palindrome(s)){
            cout<<"-1"<<"\n";
        }
        else{
        for(int i=0,j=length-1;i<j;i++,j--){
            if(s[i]==s[j]){}
            else{
                newesti=i;
                newestj=j;
                string p=s;
                string q=s;
                
                p.erase(p.begin()+newesti);
                possible=palindrome(p);

                if(possible){
                    cout<<newesti<<"\n";
                    break;
                }
                
                q.erase(q.begin()+newestj);

                possible=palindrome(q);

                if(possible){
                    cout<<newestj<<"\n";
                    break;
                }

                if(possible==false){
                    cout<<"-1"<<"\n";
                    break;
                }
            }

        }
        }
        }
        return 0;
    }
