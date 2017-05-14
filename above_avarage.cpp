#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number[1020],test,sum=0,num,ans,b,avg;
    cin>>test;
    while(test--)
    {
        cin>>num;
        sum=0;
        for(int i=0;i<num;i++)
        {
            cin>>number[i];
            sum=sum+number[i];
        }
        avg=double(sum)/double(num);
        b=0;
        for(int i=0;i<num;i++)
        {
            if(number[i]>avg)

                b++;

        }
      printf("%.3lf%%\n",(double)b/(double)num*100.0);
    }
    return 0;
}
