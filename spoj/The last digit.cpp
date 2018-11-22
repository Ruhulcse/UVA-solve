#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int binexp(ll x,ll n,ll c)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        return binexp((x*x)%c,n/2,c);
    }
    else
    {
        return (x*binexp((x*x)%c,(n-1)/2,c)%c);
    }
}
int main()
{
    int test;cin>>test;
    while(test--){
        ll a,b,c=10;
        cin>>a>>b;
       ll result=binexp(a,b,c);
       cout<<result%10<<endl;
    }
    return 0;
}
