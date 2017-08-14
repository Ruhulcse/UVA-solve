#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    char a[10005];
    cin>>n;
    cin.ignore();
    while(n--)
    {
        gets(a);
        int l=strlen(a);
        int k=sqrt(l);
        if(sqrt(l)*sqrt(l)==l)
        {
            for(int i=0;i<k;i++)
            {
                for(int j=i;j<l;j+=k)
                {
                    cout<<a[j];
                }
            }
        }
        else
        {
            cout<<"INVALID";
        }
        cout<<endl;
    }
    return 0;
}
