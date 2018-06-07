#include<bits/stdc++.h>
using namespace std;
int main()
{
   char digit[128];
   while(gets(digit))
   {
       int  dsize=strlen(digit);
        if(digit[0]=='0')
            break;
        int reminder=0;
        for(int i=0;i<dsize;i++)
        {
            reminder=(reminder*10+digit[i]-'0')%17;
        }
        if(reminder==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
   }
   return 0;
}
