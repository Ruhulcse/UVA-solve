#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(scanf("%lf %lf",&n,&p)!=EOF)
    {
        double res;
        res=pow(p,1.0/n);
       printf("%.0lf\n",res);
    }
    return 0;
}

