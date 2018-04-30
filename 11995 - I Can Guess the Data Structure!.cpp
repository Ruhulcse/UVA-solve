#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   while(cin>>n)
   {
       stack<int>s;
       queue<int>q;
       priority_queue<int>pq;
       bool ss=true;
       bool qq=true;
       bool pp=true;
       while(n--)
       {
           int a,b;
           cin>>a>>b;
           switch(a)
           {
           case 1:

                s.push(b);

                q.push(b);

                pq.push(b);

            break;
           case 2:
            if(ss)
            {
                if(s.empty()||s.top()!=b)
                    ss=false;
                else
                    s.pop();
            }

            if(qq)
            {
                if(q.empty()||q.front()!=b)
                    qq=false;
                else
                    q.pop();
            }

            if(pp)
            {
                if(pq.empty()||pq.top()!=b)
                    pp=false;
                else
                    pq.pop();
            }
            break;

           }
       }
       if(ss==true&&qq==false&&pp==false)
       {
           cout<<"Stack"<<endl;
       }
       else if(qq==true&&ss==false&&pp==false)
       {
           cout<<"queue"<<endl;
       }
       else if(pp==true&&ss==false&&qq==false)
       {
           cout<<"Priority queue"<<endl;
       }
       else if(ss==false&&qq==false&&pp==false)
       {
           cout<<"impossible"<<endl;
       }
       else
       {
           cout<<"not sure"<<endl;
       }

   }
   return 0;
}
