#include<iostream>
using namespace std;
int main()
{
   long long  int test,value,ar[52],j=1;
    ar[0]=ar[1]=1;
    for(int i=2;i<52;i++)
        ar[i]=ar[i-1]+ar[i-2];
    cin>>test;
    while(test--)
    {
        cin>>value;
        cout<<"Scenario #"<<j<<":"<<endl<<ar[value+1]<<endl<<endl;
        j++;
    }
    return 0;
}
