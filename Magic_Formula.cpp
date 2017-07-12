#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,l,res;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        int cnt=0;
         for(int i=0;i<=l;i++)
         {
             res=a*(i*i)+b*i+c;
             if(res%d==0)
                cnt++;
         }
         cout<<cnt<<endl;
    }
    return 0;
}
