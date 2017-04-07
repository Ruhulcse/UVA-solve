#include<bits/stdc++.h>
using namespace std;
int calculate(int input)
{
    long int N=1;
    int one=1,k;
    while(1)
    {
        if(N<input)
        {
            N=N*10+1;
            ++one;
        }
        k=N%input;
        if(k==0)
            break;
        else
            N=k;
    }
    return one;
}
int main()
{
    int N;
    while(cin>>N)
        cout<<calculate(N)<<endl;
    return 0;
}
