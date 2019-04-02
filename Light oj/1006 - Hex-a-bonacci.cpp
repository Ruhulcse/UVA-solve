#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
#define mod 10000007;
long long dp[10005];
long long  a,b,c,d,e,f;
long long fn(long long n)
{
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else if(dp[n]!=-1) return dp[n];
    else
    {
        dp[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%mod;
        return dp[n];
    }
}
int main()
{
    IOS;
    long long n, cnt=0,input;
    scanf("%lld",&input);
    while(input--){
        memset(dp,-1,sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        unsigned long long num=fn(n);
        num=num%mod;
        printf("Case %lld: %lld\n", ++cnt,num);
    }
    return 0;
}
