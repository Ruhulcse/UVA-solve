#include<bits/stdc++.h>
using namespace std;
vector<int>num;
void primefactor(int n)
{
    while(n%2==0)
    {
        num.push_back(2);
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            num.push_back(i);
            n=n/i;
        }
    }
    if(n>2)
    {
        num.push_back(n);
    }
}

int main()
{
    int number;
    while(cin>>number)
    {
        if(number==0)
        {
               break;
        }

        else
           {
              primefactor(number);
              set<int>nm(num.begin(),num.end());
              vector<int>s(nm.begin(),nm.end());
               cout<<number<<" : "<<s.size()<<endl;
               num.clear();
           }
    }
    return 0;
}
