#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,t,n,ch,cm,ah[1000],am[1000],at[1000],d,ans;
while(scanf("%d",&t)==1)
{
for(j=1;j<=t;j++)
 {
 ans=2500;
 scanf("%d",&n);
 scanf("%d:%d",&ch,&cm);
 for(i=0;i<n;i++)
  {
  scanf("%d:%d %d",&ah[i],&am[i],&at[i]);
  d=ah[i]*60+am[i]-ch*60-cm+at[i];
  if(d<at[i])
  d=(ah[i]+24)*60+am[i]-ch*60-cm+at[i];
  if(d<ans)
  ans=d;
  }
 printf("Case %d: %d\n",j,ans);
 }
}
}
