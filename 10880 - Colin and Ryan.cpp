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
     long long test,j=0;
     cin>>test;
     while(test--)
     {

         long long int cookie,rcookie;
         cin>>cookie>>rcookie;
         if(cookie==rcookie)
         {
            printf("Case #%lld: 0\n",++j);
         }
         else{
            printf("Case #%lld:",++j);
            long long int result=cookie-rcookie;
            vector<long long int>divisor;
            for(int i=1;i<=sqrt(result);i++)
            {
                if(result%i==0)
                {
                    if(result/i==i)
                    {

                        divisor.push_back(i);
                    }
                    else{
                        divisor.push_back(i);

                        divisor.push_back(result/i);
                    }
                }
            }
            sort(divisor.begin(),divisor.end());
            for(int i=0;i<divisor.size();i++)
            {
                if(divisor.at(i)>rcookie)
                {
                    printf(" %lld",divisor.at(i));
                }
            }
            printf("\n");
         }

         }
        return 0;
}

