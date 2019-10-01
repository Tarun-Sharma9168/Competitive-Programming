    #include<iostream>
    #include<vector>
    using namespace std;
    //vector<char> alphabet(26,' ');
    int main()
    {
    char alphabet[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n;
    int gemstones=0;
    int arrayalpha[26][26];

    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            arrayalpha[i][j]=0;
        }
    }

   // bool flag=false;
    cin>>n;
    vector<string> mineral;
    string newone;
    //mineral.resize(n);
    for(int i=0;i<n;i++)
    { 
        cin>>newone;
        mineral.push_back(newone);
    }
    //cout<<"I am IN"<<"\n";
    //cout<<mineral.size()<<" "<<"\n";
    //int newindex=0;

   //cout<<"\n";
   //cout<<"\n";
     for(int i=0;i<mineral.size();i++)
    {
        cout<<"vector"<<mineral[i].length()<<" ";
    }
    
    for(int i=0;i< mineral.size();i++)
    {
        //newindex=0;
        for(int j=0;j<26;j++)
        {
            for(int k=0;k<mineral[i].length();k++)
            {
                if( alphabet[j] == mineral[i][k] )
                {
                    arrayalpha[i][j] = 1;
                    //newindex=k+1;
                    //k=newindex;
                    break; 
                }
            }
        }
    }

   /*  for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            cout<<arrayalpha[i][j]<<" ";

        }
        cout<<"\n";
    }
*/
    int gemcount=0;
    for(int i=0;i<26;i++)
    { 
        gemcount=0;
        for(int k=0;26;k++)
        {
            if(arrayalpha[k][i]==1)
            {      //flag=true;
                   gemcount++;         
            }
            else
            {
                if(gemcount==n)
                {
                    gemstones++;
                }
                break;
            }
            
        }
    }   

    cout<<gemstones<<"\n";
    return 0;
    }