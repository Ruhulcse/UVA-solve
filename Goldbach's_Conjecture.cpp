#include<bits/stdc++.h>
using namespace std;
#define N 1000000
char P[N];

void seive()
{
    memset(P,-1,sizeof(P));
    for(int i=2;i<=N;i++)
    {
        if(P[i]==-1)
        {
            for(int j=2;i*j<=N;j++)
                P[i*j]=0;
        }
    }

}
int main()
{
    seive();
    int num,flag,f,l;
    while(scanf("%d",&num)==1&&num>=6&&num<=1000000)
    {
        if(num==0)
            break;
        else
        {
            for(int i=2;i<num;i++)
            {
                flag=0;
                l=num-i;
                if(P[l]==-1)
                {
                    if(P[i]==-1)
                    {
                        f=i;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
                cout<<num<<" = "<<f<<" + "<<l<<endl;
            else
                cout<<"Goldbach's conjecture is wrong"<<endl;
        }
    }
    return 0;
}
