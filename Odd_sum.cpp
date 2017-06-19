#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,k=1;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
        k++;
    }
    return 0;
}
