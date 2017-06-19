#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,i=1;
    cin>>test;
    while(test--)
    {
        int num,age;
        cin>>num;
        int player[num];
        for(int i=0;i<num;i++)
        {
            cin>>player[i];
        }
        int n=sizeof(player)/sizeof(player[0]);
        sort(player,player+n);
        int mid=player[n/2];
        cout<<"Case "<<i<<": "<<mid<<endl;
        i++;
    }
    return 0;
}
