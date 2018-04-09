#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  while(cin>>test)
  {
      if(test==0)
        break;
      vector<int>v;
      queue<int>card;
      for(int i=1;i<=test;i++)
      {
          card.push(i);
      }
      while(!card.empty())
      {
          v.push_back(card.front());
          card.pop();
          int n=card.front();
          card.push(card.front());
          card.pop();
      }
      cout<<"Discarded cards:";
      for(int i=0;i<v.size()-1;i++)
      {
        if(i==0)
            cout<<" ";
        cout<<v[i];
        if(i!=v.size()-2)
            cout<<", ";
      }
      cout<<endl;
      cout<<"Remaining card: "<<v[v.size()-1]<<endl;
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  while(cin>>test)
  {
      if(test==0)
        break;
      vector<int>v;
      queue<int>card;
      for(int i=1;i<=test;i++)
      {
          card.push(i);
      }
      while(!card.empty())
      {
          v.push_back(card.front());
          card.pop();
          int n=card.front();
          card.push(card.front());
          card.pop();
      }
      cout<<"Discarded cards:";
      for(int i=0;i<v.size()-1;i++)
      {
        if(i==0)
            cout<<" ";
        cout<<v[i];
        if(i!=v.size()-2)
            cout<<", ";
      }
      cout<<endl;
      cout<<"Remaining card: "<<v[v.size()-1]<<endl;
  }
  return 0;
}
