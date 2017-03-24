#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,fnum,allnum;
    bool up,down;
    cin>>test;
    cout<<"Lumberjacks:"<<endl;
    while(test--)
    {
        up=down=false;
        cin>>fnum;
        for(int i=0;i<9;i++)
        {
            cin>>allnum;
            if(fnum<allnum)
                up=true;
            else
                down=true;
            fnum=allnum;

        }
        if(up&&down)
        {

            cout<<"Unordered"<<endl;
        }

        else{
            cout<<"Ordered"<<endl;
        }
    }
    return 0;
}
