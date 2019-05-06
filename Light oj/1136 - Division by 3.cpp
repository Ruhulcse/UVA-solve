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
int cnt(int n)
{
    if(n==0)
    {
        return 0;
    }
    int result=(n/3)*2;
    if(n%3==2)
    {
        result+=1;
    }
    return result;
}
int main()
{
     IOS;
     int T, cases = 1, a, b;
 
    scanf("%d", &T);
 
    while (T--) {
 
        scanf("%d %d", &a, &b);
 
        printf("Case %d: %d\n", cases++ ,cnt(b) -cnt(a - 1));
    }
     return 0;
}
 
