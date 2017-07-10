#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,st,stn;
    cin>>test;
    while(test--)
    {
        cin>>st;
       int street[st];
        for(int i=0;i<st;i++)
        {
            cin>>street[i];
        }
        sort(street,street+st);
        int median=street[st/2];
        int ans=0;
        for(int i=0;i<st;i++)
        {
           ans+=abs(median-street[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
