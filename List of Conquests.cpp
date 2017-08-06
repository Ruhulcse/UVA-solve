#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    int test;
    string a,last;
    map<string,int>m;
    set<string>s;
    set<string>::iterator it;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        cin>>a;
        getline(cin,last);
        m[a]++;
        s.insert(a);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" "<<m[*it]<<endl;
    }
    return 0;
}
