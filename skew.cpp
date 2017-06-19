#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    char s[10001];
    int l,i,sum;
    while(true)
    {
        gets(s);
        if(strcmp(s,"0")==0)
            return 0;
        l=strlen(s);
        i=0;
        sum=0;
        while(l>0)
        {
            sum+=(s[i]-'0')*(pow(2,l)-1);
            l--;
            i++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
