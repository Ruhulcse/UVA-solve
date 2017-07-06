#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,ntest,time,milecost,juicecost,i=1;
    cin>>test;
    while(test--)
    {
        cin>>ntest;
        milecost=juicecost=0;
        while(ntest--)
        {
            cin>>time;
            milecost+=(time/30)*10+10;
            juicecost+=(time/60)*15+15;
        }
        cout<<"Case "<<i<<": ";
        if(milecost<juicecost)
        cout<<"Mile "<<milecost<<endl;

       else if(milecost==juicecost)
           cout<<"Mile ";
        if(juicecost<=milecost)
            cout<<"Juice "<<juicecost<<endl;
            i++;
    }
    return 0;
}
