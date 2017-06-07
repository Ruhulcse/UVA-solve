#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  while(cin>>test,test!=0)
  {
      string s;
      cin>>s;
     int a=s.size();
      int resturent=-test;
      int drugstore=-test;
      int result= test;
      for(int i=0;i<a;i++)
      {
          switch(s[i])
          {
          case 'R':
            resturent=i;
            result= min(result,resturent-drugstore);
            break;
          case 'D':
            drugstore=i;
            result=min(result,drugstore-resturent);
            break;
          case 'Z':
            result=0;
            break;
          }
      }
      cout<<result<<endl;
  }
  return 0;
}
