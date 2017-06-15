
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   while(scanf("%d",&n)==1)
   {
       int l,ngroup;
       if(n==0)
        break;
       char s[110];
       getchar();
       cin>>s;
       l=strlen(s);
       ngroup=l/n;
       for(int i=1;i<=n;i++)
       {
           int j=i*ngroup;
           int t=ngroup;
           while(t--)
           {
               cout<<s[--j];
           }
       }
       cout<<endl;
   }
   return 0;
}
