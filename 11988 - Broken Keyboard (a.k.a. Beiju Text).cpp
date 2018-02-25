#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   while(getline(cin,s))
   {
       list<char>mylist;
       list<char>::iterator it;
        it=mylist.begin();
        int len=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                it=mylist.begin();
            }
            else if(s[i]==']')
            {
                it=mylist.end();
            }
            else
            {
                mylist.insert(it,s[i]);
            }
        }
        for(it=mylist.begin();it!=mylist.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
        mylist.clear();

   }
   return 0;
}
