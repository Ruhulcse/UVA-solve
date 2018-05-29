#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        int F=0;
        int M=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='F')
                F++;
            else if(s[i]=='M')
                M++;
        }
        int l=s.size();
        if(F==M && l>3)
        {
            cout<<"LOOP"<<endl;
        }
        else
        {
            cout<<"NO LOOP"<<endl;
        }
    }
    return 0;
}
