#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<int,int>num;
   vector<int>v;
   int n;
   while(cin>>n)
   {
       if(num[n]==0)
        v.push_back(n);
      num[n]++;
   }
   for(int i=0;i<v.size();i++)
   {
       cout<<v.at(i)<<" "<<num[v.at(i)]<<endl;
   }
   return 0;
}
