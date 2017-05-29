#include<bits/stdc++.h>
using namespace std;
int soundex(char ch)
{
    switch(ch)
    {
    case 'B':
    case 'F':
    case 'P':
    case 'V':
        return 1;
    case 'C':
    case 'G':
    case 'J':
    case 'K':
    case 'Q':
    case 'S':
    case 'X':
    case 'Z':
        return 2;
    case 'D':
    case 'T':
        return 3;
    case 'L':
        return 4;
    case 'M':
    case 'N':
        return 5;
    case 'R':
        return 6;
    }
    return -1;
}

int main()
{
    char str[20];
    int temp,value;
    while(cin>>str)
    {
        temp=0;
        for(int i=0;i<strlen(str);i++)
        {
            value=soundex(str[i]);
            if(value>-1&&temp!=value)
            {
                cout<<value;
            }
            temp=value;
        }
        cout<<endl;
    }
    return 0;
}
