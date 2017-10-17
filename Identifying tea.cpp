#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(scanf("%d",&test)==1)
    {

        int l=0;
        for(int i=0;i<5;i++)
        {
            int a;
            cin>>a;
            if(a==test)
                l++;
        }
        cout<<l<<endl;
    }
    return 0;
}
