#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
      int a,b,diff,minstep;
        cin>>a>>b;
      diff=b-a;
       minstep=0;
        if(diff!=0)
        {
            int sstep,z;
            sstep=0;
             z=2;
            while(diff>sstep)
            {
                sstep+=(z/2);
                minstep++;
                z++;
            }
        }
        cout<<minstep<<endl;
    }
    return 0;
}
