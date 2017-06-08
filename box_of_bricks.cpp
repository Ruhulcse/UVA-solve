#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Stack,a[105],avg,Move,sum,Count=1;
    while(scanf("%d",&Stack)==1)
    {
        if(Stack==0)
            break;
        sum=0;
        for(int i=0;i<Stack;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=sum/Stack;
        Move=0;
        for(int j=0;j<Stack;j++)
        {
            if(a[j]>avg)
                Move+=(a[j]-avg);
        }
        cout<<"Set #"<<Count++<<endl;
        cout<<"The minimum number of moves is "<<Move<<"."<<endl<<endl;
    }
    return 0;
}
