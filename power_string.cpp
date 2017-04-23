#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s && s!=".")
    {
        int mx=1;
        int ln=s.length();
        for(int i=1;i<ln;i++)
            while(s[i]!=s[i%mx])
            mx++;
        if(ln%mx!=0)
            cout<<mx;
        else
            cout<<ln/mx<<endl;
    }
    return 0;
}
