#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,subno,time,dateline,flag,i;
    string subname,subname2;
    map<string,int>sapro;
    map<string,int>::iterator it;
    cin>>test;
    getchar();
    i=1;
    while(test--)
    {
        cin>>subno;
        getchar();
        while(subno--)
        {
            cin>>subname>>time;
            sapro[subname]=time;
        }
        cin>>dateline;
        getchar();
        cin>>subname2;
        flag=0;
        it=sapro.find(subname2);
        if(it==sapro.end()||sapro[subname2]>dateline+5)
        {
            flag=1;
        }
        else if(sapro[subname2]>dateline&&sapro[subname2]<=dateline+5)
        {
            flag=2;
        }
       if(flag==0)
       {
           cout<<"Case "<<i<<": Yesss"<<endl;
       }
       else if(flag==2)
       {
           cout<<"Case "<<i<<": Late"<<endl;
       }
       else
       {
           cout<<"Case "<<i<<": Do your own homework!"<<endl;
       }
       i++;
      sapro.clear();
    }
   return 0;
}
