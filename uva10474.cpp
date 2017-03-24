#include<iostream>
using namespace std;
int main()
{
    int marbel,num;
    int a[10000];
  while(cin>>marbel&&cin>>num)
                        {
                            if(marbel==0&&num==0)
                                break;
                            else
                            for(int i=0;i<marbel;i++)
                            {
                                cin>>a[i];
                            }
                        }
           return 0;
}
