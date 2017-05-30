#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int test,num,r=0;
    cin>>test;
    while(test--)
    {
        cin>>ch;
        if(ch=="donate")
        {
            cin>>num;
            r+=num;
        }
        if(ch=="report")
            cout<<r<<endl;
    }
    return 0;
}
