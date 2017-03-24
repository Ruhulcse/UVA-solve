#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;

    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==-1&&b==-1)
            break;
        if(a==0&&b==99||a==99&&b==0)
            printf("1\n");
        else
        {
            s=abs(a-b);
            if(s>50)
                s=100-s;
            printf("%d\n",s);
        }
    }
    return 0;
}
