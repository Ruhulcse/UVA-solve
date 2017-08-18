#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10][100];
    int r[10];
    int test,k=1,maximum;
    cin>>test;
    while(test--)
    {
        cin>>s[0]>>r[0];
        maximum=r[0];
        for(int i=1;i<10;i++)
        {
            cin>>s[i]>>r[i];
            if(r[i]>maximum)
                maximum=r[i];
        }
        cout<<"Case #"<<k<<":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(r[i]==maximum)
                cout<<s[i]<<endl;
        }
        k++;
    }
    return 0;
}
