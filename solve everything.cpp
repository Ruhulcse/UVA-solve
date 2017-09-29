#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st;
    cin>>st;
    int num[13];
    int c=1;
    while(st--)
            {
                int flag=0;

                for(int i=0;i<13;i++)
                {
                    cin>>num[i];
                }
             for(int i=0;i<13;i++)
                {
                    if(num[i]==0)
                    {
                        flag=1;
                        break;
                    }
                }
           if(flag==1)
           {
               cout<<"Set #"<<c<<":"<<" No"<<endl;
           }
           else
           {
                cout<<"Set #"<<c<<":"<<" Yes"<<endl;
           }
           c++;
            }
    return 0;

}
