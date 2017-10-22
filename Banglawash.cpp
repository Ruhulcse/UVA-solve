#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  int C=1;
  while(test--)
  {
     int match;
     cin>>match;
     char b;

     int A=0,B=0,T=0,W=0;
     for(int i=0;i<match;i++)
     {
         cin>>b;
         if(b=='A')
            A++;
         else if(b=='B')
            B++;
        else if(b=='T')
            T++;
         else if(b=='W')
            W++;
     }

    if(B==match||(B+A)==match&&A!=match)
    {
        cout<<"Case "<<C<<": "<<"BANGLAWASH"<<endl;
    }
    else if(W==match||(W+A)==match&&A!=match)
    {
        cout<<"Case "<<C<<": "<<"WHITEWASH"<<endl;
    }
    else if(W>B)
    {
         cout<<"Case "<<C<<": "<<"WWW "<<W<<" - "<<B<<endl;
    }
    else if(W<B)
    {
         cout<<"Case "<<C<<": "<<"BANGLADESH "<<B<<" - "<<W<<endl;
    }
    else if(A==match)
    {
         cout<<"Case "<<C<<": "<<"ABANDONED"<<endl;
    }
    else if(W==B&&A!=match)
    {
         cout<<"Case "<<C<<": "<<"DRAW "<<W<<" "<<T<<endl;
    }
    C++;
  }
  return 0;
}
