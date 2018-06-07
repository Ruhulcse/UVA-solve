#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[201];
    int sum[201]={0};
    while(gets(num))
    {
        if(!strcmp(num,"0"))
            break;
        int length=strlen(num);
        for(int i=0,j=length-1;i<length;i++,j--)
        {
            sum[i]+=num[j]-'0';
        }
    }
        for(int i=0;i<200;i++)
        {
            if(sum[i]>=10)
            {
                sum[i+1]+=sum[i]/10;
                sum[i]%=10;
            }
        }
        int i=200;
        while(sum[i]==0&&i>=0)
        {
            i--;
        }

        for(;i>=0;i--)
        {
            cout<<sum[i];
        }
        cout<<endl;
        return 0;
}
