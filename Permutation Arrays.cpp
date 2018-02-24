#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    getchar();
    while(test--)
    {
        getchar();
        map<int,double>mymap;
        vector<int>num;
        vector<string>num2;
        vector<pair<int,string> >final;
        string a,b,t;
        getline(cin,a);
        stringstream ss(a);
        while(ss>>n)
        {
            num.push_back(n);
        }
        getline(cin,b);
        stringstream sss(b);
        while(sss>>t)
        {
            num2.push_back(t);
        }
        int s=min(num.size(),num2.size());
        for(int i=0;i<s;i++)
        {
            final.push_back(make_pair(num[i],num2[i]));
        }
        sort(final.begin(),final.end());
        for(int i=0;i<s;i++)
        {
            cout<<final[i].second<<endl;
        }
        num.clear();
        num2.clear();
        final.clear();
        if(test)
            cout<<endl;
    }

    return 0;
}
