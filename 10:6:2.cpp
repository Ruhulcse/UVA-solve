#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
int main()
{
    int t;
    double b,c,r,h,g,n;
    scanf("%d",&t);
    while(t--)
    {
       r=0;
       scanf("%lf",&n);
       r=n/5;
       h=(n*6)/10;
       r=Pi*r*r;
       g=(n*h)-r;
       printf("%.2lf %.2lf\n",r,g);
    }
    return 0;
}
