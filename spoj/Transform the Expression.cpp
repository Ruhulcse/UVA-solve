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
     int n;
     cin>>n;
     cin.ignore(1,'\n');
     for(int i=0;i<n;i++)
     {
         string s;
         getline(cin,s);
         stack<char>st;
         for(int i=0;i<s.length();i++)
         {
             if(s[i]==')')
             {
                 cout<<st.top();
                 st.pop();
             }
             else if(s[i]=='(')
             {
                 continue;
             }
             else if(s[i]>='a'&&s[i]<='z')
             {
                 cout<<s[i];
             }
             else{
                st.push(s[i]);
             }
         }
         cout<<endl;
     }
     return 0;
}

