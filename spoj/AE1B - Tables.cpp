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
     int n,k,s;
     cin>>n>>k>>s;
     int t=k*s;
     priority_queue<int>qq;
     for(int i=0;i<n;i++)
     {
         int a;
         cin>>a;
         qq.push(a);
     }
     int sum=0;
     int i=0;
     while(sum<t)
     {
         sum+=qq.top();
         qq.pop();
         i++;
     }
     cout<<i<<endl;
     return 0;
}
