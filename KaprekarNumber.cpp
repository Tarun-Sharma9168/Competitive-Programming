#include<iostream>
using namespace std;
int main()
{
    int p;
    int q;

    cin>>p>>q;

   bool flag=false;
  for(int i=p;i<=q;i++)
  {
      if(isKaprekarOrNot(i))

      {
          flag=true;
      }
  }
  if(!flag)
  {
      cout<<"INVALID RANGE";
  }
return 0;
}
bool isKaprekarOrNot(int n)
{
    long int squared=(long)(n)*(long)(n);
    string s=to_string(squared);

    string left_string=s.substr(0,s.length()/2);
    string right_string=s.substr(s.length()/2);

    int number_left=(left_string.length()==0)?0:stoi(left_string);
    int number_right=(right_string.length()==0)?0:stoi(right_string);

    if((number_left+number_right)==n)
    {
        cout<<n<<" ";
    
    return true;
    }

    else
    {
        return false;
    }

}