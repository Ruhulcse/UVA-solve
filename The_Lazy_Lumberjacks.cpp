#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        if((a+b)<=c)
        {
          cout<<"Wrong!!"<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
    }
    return 0;
}
