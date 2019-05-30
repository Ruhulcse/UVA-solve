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
         string a,b;
         cin>>a>>b;
         reverse(a.begin(),a.end());
         reverse(b.begin(),b.end());
         a.erase(0,a.find_first_not_of('0'));
         b.erase(0,b.find_first_not_of('0'));
         stringstream ss(a);
         stringstream dd(b);
         int c=0;
         int d=0;
         ss>>c;
         dd>>d;
         int r=c+d;
         ostringstream st;
         st<<r;
         string s=st.str();
         reverse(s.begin(),s.end());
         s.erase(0,s.find_first_not_of('0'));
         cout<<s<<endl;
     }
     return 0;
}
