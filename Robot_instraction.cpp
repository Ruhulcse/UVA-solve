#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,step,result,e,ar[101];
    char c[20];
    cin>>test;
    while(test--)
    {
        cin>>step;
        result=0;
        for(int i=1;i<=step;++i)
        {
            scanf("%s",c);
            if(c[0]=='L')
            {
                result-=1;
                ar[i]=-1;
            }
            else if(c[0]=='R')
            {
                result+=1;
                ar[i]=1;
            }
            else
            {
                scanf("%s%d",c,&e);
                result+=ar[e];
                ar[i]=ar[e];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
