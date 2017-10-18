#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        do
        {
            cout<<a<<endl;
        }while(next_permutation(a.begin(),a.end()));
        cout<<endl;
    }
    return 0;
}
