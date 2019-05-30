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
     cin>>test;
     for(int i=0;i<test;i++)
     {
       string s;
       cin>>s;
       int sum=0;
       for(int i=0;i<s.size();i++)
       {
           sum+=s[i]-'0';
       }
       cout<<sum<<endl;
     }
     return 0;
}
