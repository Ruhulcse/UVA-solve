#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,b,h,w,p,amount,room,cost=15000000;
    while(scanf("%ld%ld%ld%ld%",&n,&b,&h,&w)==4)
    {
    while(h--)
    {
       cin>>amount;
       for(int i=0;i<w;i++)
       {
           cin>>room;
           p=0;
           if(room>=n)
           {
               p=amount*n;
               if(cost>p)
                cost=p;
           }
       }

    }

    if(cost>b)
    {
        cout<<"stay home"<<endl;
    }
    else
    {
        cout<<cost<<endl;
    }
    cost=15000000;

}
return 0;
}
