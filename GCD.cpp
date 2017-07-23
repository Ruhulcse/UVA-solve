#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b);
int main()
{
    int n=0;
    int sum=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum+=gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
