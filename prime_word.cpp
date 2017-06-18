#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==0)
        return false;
    else if(n==1)
        return true;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}
int main()
{
    int sum=0;
    string s;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a'&&s[i]<='z'))
               {
                   sum+=(int)s[i]-96;
               }
                if((s[i]>='A'&&s[i]<='Z'))
                {
                    sum+=(int)s[i]-38;
                }
        }
        if(isprime(sum)==1)
        {
            cout<<"It is a prime word."<<endl;
            sum=0;
        }
        else if(isprime(sum)==0)
        {
            cout<<"It is not a prime word."<<endl;
            sum=0;
        }
    }
    return 0;
}
