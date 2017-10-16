#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,k=1;
    cin>>test;
    while(test--)
    {
        int t1,t2,f,a,ct1,ct2,ct3,sum,c;
        cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
        vector<int>bc;
        bc.push_back(ct1);
        bc.push_back(ct2);
        bc.push_back(ct3);
        sort(bc.begin(),bc.end());
        c=(bc.at(1)+bc.at(2))/2;
        sum=t1+t2+f+a+c;

        if(sum>=90)
        {
            cout<<"Case "<<k<<": A"<<endl;
        }
        else if(sum>=80&&sum<90)
        {
             cout<<"Case "<<k<<": B"<<endl;
        }
        else if(sum>=70&&sum<80)
        {
             cout<<"Case "<<k<<": C"<<endl;
        }
        else if(sum>=60&&sum<70)
        {
             cout<<"Case "<<k<<": D"<<endl;
        }
        else
        {
             cout<<"Case "<<k<<": F"<<endl;
        }
        k++;

    }
    return 0;
}
