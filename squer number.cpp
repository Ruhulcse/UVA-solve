#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int a,c,b,res;
        cin>>a>>b;
        if(a==0&&b==0)
            break;
           res=0;
        for(int i=a;i<=b;i++)
        {
            c=sqrt(i);
          if(c*c==i)
                res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
