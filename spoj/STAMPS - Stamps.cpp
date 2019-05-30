///...........................Bismillahi-r-Rahmani-r-Rahim..................................///
///...................................*****.................................................///
///                  Mohammad Ruhul Amin                                                    ///
///                  Department of CSE                                                      ///
///                  College of business Science and Technology(CBST),Mymensingh.           ///
///...................................*****.................................................///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";

int main()
{
     IOS;
     int test;
     int i=1;
     cin>>test;
     while(test--)
     {
         int n,k;
     cin>>n>>k;
     priority_queue<int>qq;
     for(int i=0;i<k;i++)
     {
         int a;
         cin>>a;
         qq.push(a);
     }
     int sum=0;
     int t=0;
     while(!qq.empty())
     {
         sum+=qq.top();
         qq.pop();
         t++;
         if(sum>=n)
            break;
     }
     if(sum<n)
     {
       cout<<"Scenario #"<<i++<<":"<<endl;
       cout<<"impossible"<<endl;
     }
     else{
        cout<<"Scenario #"<<i++<<":"<<endl;
        cout<<t<<endl;
     }

     }
     return 0;
}
