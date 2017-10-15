#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,l=1;
    cin>>test;
   while(test--)
   {
    int num,A,B,C,D,res;
    cin>>num;
    int Ar[4];
    int cnt=0,i=2,k=0;
    while(true)
    {
        if(cnt==2)
            break;
        else
            if(num%i==0)
            {
                res=num/i;
                Ar[k++]=res;
                Ar[k++]=i;
                cnt++;
                if(k==4)
                    break;

            }
            i++;
    }
    cout<<"Case #"<<l<<": "<<num<<" = "<<Ar[0]<<" * "<<Ar[1]<<" = "<<Ar[2]<<" * "<<Ar[3]<<endl;
    l++;

   }
    return 0;
}
