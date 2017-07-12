#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q,div1,div2,x,y;
     while(scanf("%d",&q))
     {
         if(q==0)
            break;
         cin>>div1>>div2;
         while(q--)
         {
             cin>>x>>y;
             if(x==div1||y==div2)
             {
                 cout<<"divisa"<<endl;
             }
            else if(x>div1&&y>div2)
             {
                 cout<<"NE"<<endl;
             }
            else if(x<div1&&y>div2)
             {
                 cout<<"NO"<<endl;
             }
           else if(x>div1&&y<div2)
             {
                 cout<<"SE"<<endl;
             }
           else  if(x<div1&&y<div2)
             {
                cout<<"SO"<<endl;
             }
         }
     }
     return 0;

}
