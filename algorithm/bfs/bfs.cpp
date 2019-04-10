#include<bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3
#define INT_MIN 2147483648
int adj[100][100];
int color[100];
int dis[100];
int parent[100];
int node,edge;

void bfs(int starting_node){

     for(int i=0;i<node;i++)
     {
         color[i]=WHITE;
         dis[i]=INT_MIN;
         parent[i]=-1;
     }
     dis[starting_node]=0;
     parent[starting_node]=-1;
     queue<int>q;
     q.push(starting_node);
     while(!q.empty())
     {
         int x=q.front();
         q.pop();
         color[x]=GRAY;
         cout<<x<< " ";
         for(int i=0;i<node;i++)
         {
             if(adj[x][i]==1&&color[i]==WHITE){
                color[i]=GRAY;
                dis[i]=dis[x]+1;
                parent[i]=x;
                q.push(i);
             }
         }
         color[x]=BLACK;
     }
}


int main(){
  cin>>node>>edge;
  for(int i=0;i<edge;i++)
  {
      int a,b;
      cin>>a>>b;
      adj[a][b]=1;
      adj[b][a]=1;
  }
  bfs(0);
  return 0;
}
