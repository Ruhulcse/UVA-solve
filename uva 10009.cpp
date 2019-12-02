#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";

void printpath( map<string,string> &prev, string v)
{
   const string &u=prev[v];
   if(u!=v)
   {
       printpath(prev,u);
   }
   cout<<v[0];
}
int main()
{
    IOS;
    int test;
    cin>>test;
    while(test--)
    {
        int m,n;
        cin>>m>>n;
        map<string, vector<string> >Graph;
        for(int i=0;i<m;i++)
        {
            string a,b;
            cin>>a>>b;
            Graph[a].push_back(b);
            Graph[b].push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            string s,t;
            cin>>s>>t;
            queue<string>q;
            map<string,string>prev;
            prev[s]=s;
            q.push(s);
            while(!q.empty()&&!prev.count(t))
            {
                string u=q.front();
                q.pop();
                for(int i=0;i<Graph[u].size();++i)
                {
                    const string &v=Graph[u][i];
                    if(!prev.count(v))
                    {
                        prev[v]=u;
                        q.push(v);
                    }
                }
            }
            printpath(prev,t);
            cout<<endl;
        }
        if(test)
        {
            cout<<endl;
        }
    }
   return 0;
}
