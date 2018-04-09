#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int x,dd,mm,yyyy,minimum_age_old=0,maximum_age_young=22222222;
        string oldage,youngage,name;
        for(i=0; i<n; i++)
        {
            cin>>name>>dd>>mm>>yyyy;
            x=yyyy*10000+mm*100+dd; //converting it to integer
            if(x>minimum_age_old)  //here comparison is going on with previous value that saved in memory
            {
                minimum_age_old=x;
                oldage=name;
            }
            if(x<maximum_age_young) //here is also comparison going on with the previous value that saved in the variable memory
            {
                maximum_age_young=x;
                youngage=name;
            }
        }
        cout<<oldage<<endl; //younger print
        cout<<youngage<<endl; //older print
 
    }
    return 0;
}
