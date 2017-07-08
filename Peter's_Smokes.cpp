#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)==2)
    {
        c=b-1;
        d=a/c;
        if(a%c==0)
        {
        cout<<a+d-1<<endl;
        }
        else
        {
            cout<<a+d<<endl;
        }
    }
    return 0;
}
