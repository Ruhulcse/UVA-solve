#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
       int l=a.size();
        char c[l];
        for(int i=0;i<l;i++)
        {
            if(a[i]=='-')
            {
                c[i]='-';
            }
            if(a[i]=='1')
            {
                c[i]='1';
            }
            if(a[i]=='0')
            {
                c[i]='0';
            }
            if(a[i]=='A'||a[i]=='B'||a[i]=='C')
            {
                c[i]='2';
            }
             if(a[i]=='D'||a[i]=='E'||a[i]=='F')
            {
                c[i]='3';
            }
             if(a[i]=='G'||a[i]=='H'||a[i]=='I')
            {
                c[i]='4';
            }
             if(a[i]=='J'||a[i]=='K'||a[i]=='L')
            {
                c[i]='5';
            }
             if(a[i]=='M'||a[i]=='N'||a[i]=='O')
            {
                c[i]='6';
            }
             if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
            {
                c[i]='7';
            }
             if(a[i]=='T'||a[i]=='U'||a[i]=='V')
            {
                c[i]='8';
            }
             if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
            {
                c[i]='9';
            }
        }
        for(int j=0;j<l;j++)
        {
            cout<<c[j];
        }
        cout<<endl;
    }
    return 0;
}
