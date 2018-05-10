#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i=1;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        set<char>Final;
        set<char>::iterator it;
        set<char>unichar;
        for(int i=0;i<s.size();i++)
        {
            unichar.insert(s[i]);
        }
        vector<char>v(unichar.begin(),unichar.end());
        for(int i=0;i<unichar.size();i++)
        {
            int num;
            num=count(s.begin(),s.end(),v[i]);
            int cnt=0;
            for(int i=1;i<=num;i++)
            {
                if(num%i==0)
                {
                  cnt++;
                }
                if(cnt>2)
                {
                    break;
                }
            }
            if(cnt==2)
            {
                Final.insert(v[i]);
            }
        }
        if(Final.size()==0)
        {
            cout<<"Case "<<i<<": ";
            cout<<"empty";
        }
        else
        {
             cout<<"Case "<<i<<": ";
            for(it=Final.begin();it!=Final.end();++it)
                {
                    cout<<*it;
                }
        }
        cout<<endl;
        i++;
    }
    return 0;
}
