#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int subtest,line,l;
        char c;
        double value,total=0;
        cin>>subtest;
        map<char,double>cost;
        map<char,double>::iterator it;
        for(int i=0;i<subtest;i++)
        {
            cin>>c>>value;
            cost[c]=value;
        }
      cin>>line;
      string s;
      cin.ignore();
      for(int i=0;i<line;i++)
      {
          s= "";
          getline(cin,s);
           for(int j=0;j<s.size();j++)
           {
               it=cost.find(s[j]);
               if(it!=cost.end())
               {
                     total+=it->second;
               }

           }
      }
      total/=100;
      printf("%0.2lf$\n", total);
      cost.clear();
    }
    return 0;
}
