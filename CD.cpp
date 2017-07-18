#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,bal;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0&b==0)
            break;
     int total=a+b;
      set<int>cd;
      for(int i=0;i<total;i++)
      {
          cin>>bal;
          cd.insert(bal);
      }
      cout<<total-(cd.size())<<endl;
      cd.clear();
    }
    return 0;
}
