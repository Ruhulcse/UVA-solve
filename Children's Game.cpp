#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
    string x=a+b;
    string y=b+a;
    if(x>y)
        return true;
    else
        return false;
}
int main()
{
    while(true)
    {
        int num;
        cin>>num;
        if(num==0)
            break;
        string s[num+1];
        for(int i=0;i<num;i++)
        {
            cin>>s[i];
        }
        sort(s,s+num,cmp);
      for(int i=0;i<num;i++)
      {
          cout<<s[i];
      }
      cout<<endl;
    }
    return 0;
}
