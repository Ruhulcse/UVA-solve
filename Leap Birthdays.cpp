#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,m,d,y,q,total=0;
    cin>>test;
    int i=1;
    while(test--)
    {
         int cnt,a;
        cin>>d>>m>>y>>q;
        if(d==29&&m==2)
        {
           cnt=0;
            a=y;
            while(a<q+1)
            {
                if(((a%4==0)&&(a%100!=0))||(a%400==0))
                {
                    cnt+=1;

                }
                a+=4;
            }
          cout<<"Case "<<i<<": "<<cnt-1<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<q-y<<endl;
        }
       i++;
    }
    return 0;
}
