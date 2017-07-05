#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k,test,p,q;
    cin>>test;
    while(test--)
    {
        cin>>x>>k;
        q=x%k;
        if(x>=k)
            p=(x-q)/(x/k)-q;
        else
            p=0;
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
