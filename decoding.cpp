#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,ks=1;
    string a;
    cin>>test;
    getline(cin,a);
    while(test--)
    {
        getline(cin,a);
        int l=a.size();
        cout<<"Case "<<ks<<": ";
        ks++;
        for(int i=0;i<l;)
        {
            char b;
            b=a[i];
            i++;
            int sum=0;
            while(isdigit(a[i]))
            {
                sum=(10*sum)+(a[i]-'0');
                i++;
            }
            for(int i=0;i<sum;i++)
            {
                cout<<b;
            }

        }
     cout<<endl;
    }
    return 0;
}
