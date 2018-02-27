#include<bits/stdc++.h>
using namespace std;
int main()
{
   int bottle;
   while(scanf("%d",&bottle)==1)
   {
       int total=bottle;
       while(bottle>=3)
       {
           total+=bottle/3;
           bottle=bottle/3+bottle%3;

       }
       if(bottle==2)
            total+=1;
       cout<<total<<endl;
   }
   return 0;
}
