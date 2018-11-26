#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll phi(ll n)
{
    ll result=n;
    for(ll p=2;p*p<=n;++p)
    {
        if(n%p==0)
        {
            while(n%p==0)
                n/=p;
            result-=result/p;
        }
    }
    if(n>1)
        result-=result/n;
    return result;
}
int main()
{
    ll input;
    while(cin>>input&&input!=0)
    {
        if(input==1)
        {
           printf("0\n");
        }
        else
        {
            printf("%lld\n",phi(input));
        }

    }
    return 0;
}
