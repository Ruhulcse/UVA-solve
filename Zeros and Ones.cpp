#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int cnt=1;
  while(cin>>s)
  {
      if(s.size()==0)
        break;
   int a,b,c,flag;
   cin>>a;
   cout<<"Case "<<cnt<<":"<<endl;
   while(a--)
   {
       flag=0;
       cin>>b>>c;
       if(b>c)
         swap(b,c);
       for(int j=b+1;j<=c;j++)
       {
           if(s[b]!=s[j])
            flag=1;
       }
       if(flag==0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
   }
   cnt++;
  }
   return 0;
}
