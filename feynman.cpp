#include<iostream>
using namespace std;
int main()
{
    int test;
    while(cin>>test&&test!=0)
    {
        int result=0;
        for(int i=0;i<=test;i++)
        {
            result+=i*i;
        }
        cout<<result<<endl;
    }
    return 0;
}
