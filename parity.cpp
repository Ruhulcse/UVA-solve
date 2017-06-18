#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[105],num,bit;
    while(cin>>num)
    {
        if(num==0)
            break;
        int i=0;
        while(num>0)
        {
            a[i]=num%2;
            i++;
            num=num/2;
        }
        bit=0;
        cout<<"The parity of ";
        for(int j=i-1;j>=0;j--)
        {
            cout<<a[j];
            if(a[j]==1)
            {
                bit=bit+1;
            }
        }
       cout<<" is "<<bit<<" (mod 2)."<<endl;
    }
    return 0;
}
