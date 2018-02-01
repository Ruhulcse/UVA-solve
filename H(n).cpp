#include<bits/stdc++.h>
using namespace std;
long long h(int n)
{
    long long res=0;
    int k=sqrt(n);
    for(int i=1;i<=k;++i)
    {
        res+=n/i+n/i;

    }
    res-=k*k;
    cout<<res<<endl;

}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a;
        cin>>a;
        h(a);
    }
    return 0;
}
