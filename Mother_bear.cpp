#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str=="DONE")
            break;
        string s1="",s2;
        for(int i=0;i<str.size();i++)
        {
            if(isalpha(str[i]))
                 s1+=tolower(str[i]);

        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2)
        {
            cout<<"You won't be eaten!"<<endl;
        }
        else
        {
            cout<<"Uh oh.."<<endl;
        }
    }
    return 0;
}
