#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,e,f,c;
    cin>>test;
    while(test--)
    {
        cin>>e>>f>>c;
        int sum=0, x=e+f;
        for( int i=0;i<=2000;i++)
        {
            sum+=x/c;
            if(x<=c)
            {
                break;
            }
            x=x/c+x%c;
        }
        cout<<sum<<endl;
    }
    return 0;
}
