#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int r=sqrt(n);
    for(int i=2;i<=r;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        if(n%2==1)
        {
            if(isprime(n-2))
            {
                cout<<n<<":"<<endl;
                cout<<2<<"+"<<n-2<<endl;
            }
            else
            {
                 cout<<n<<":"<<endl;
                 cout<<"NO WAY!"<<endl;
            }
        }
        else
        {
            for(int i=3;i<=n;i++)
            {
                if(isprime(i)&&isprime(n-i))
                {
                     cout << n << ':' << '\n' << i << '+' << n-i <<"\n";
                       break;
                }
            }
        }
    }
    return 0;
}
