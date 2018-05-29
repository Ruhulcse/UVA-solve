#include<bits/stdc++.h>
using namespace std;
int divisor(int n)
{
     int sum=0;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==(n/i))
            {
                sum+=i;
            }
            else
            {
                sum+=(i+n/i);
            }
        }
    }
    return sum+1;
}
int main()
{
    int num;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d",&num)==1)
    {
        if(num==0)
        {

            break;
        }
       else
       {
           int result=divisor(num);

            cout<<setw(5)<<num;
            if(num==result)
            {
                cout<<"  PERFECT"<<endl;
            }
            else if(num>result)
           {
               cout<<"  DEFICIENT"<<endl;
           }
           else
           {
               cout<<"  ABUNDANT"<<endl;
           }
       }

    }
     cout<<"END OF OUTPUT"<<endl;
   return 0;
}
