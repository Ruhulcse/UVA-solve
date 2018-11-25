#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll last(ll n,ll k,ll c)
{
    if(k==0)
    {
        return 1;
    }
    else if(k%2==0)
    {

        return last((n*n)%c,k/2,c);
    }
    else
    {
        return(n*last((n*n)%c,(k-1)/2,c)%c);
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll n,k,c=1000;
        cin>>n>>k;
        printf("%d...%03d\n", (int)(pow(10, fmod(k*log10(n), 1))*100),last(n,k,c));
    }
    return 0;
}
