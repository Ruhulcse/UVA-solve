#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,T=1;
    cin>>test;
    while(test--)
    {
        int m,l,a[20],b[20];
        cin>>m>>l;
        int sum=0;
        int sm=1;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
            sm&=a[j]<=b[j];
        }
       sm&=sum<=l;
       printf("Case %d: %s\n", T, sm ? "Yes" : "No");
       T++;
    }
    return 0;
}
