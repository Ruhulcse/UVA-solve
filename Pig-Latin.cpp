#include<bits/stdc++.h>
using namespace std;
int vowel(char a)
{
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
        return 1;
    return 0;
}
int main()
{
    char first,word;
    while(word=getchar())
    {
        if(word==EOF)
            return 0;
        if(isalpha(word))
        {
            if(vowel(word))
            {
                while(isalpha(word))
                {
                    cout<<word;
                    word=getchar();
                }
                cout<<"ay";
            }

        else
            {
                first=word;
                word=getchar();
                while(isalpha(word))
                {
                    cout<<word;
                    word=getchar();
                }
                cout<<first<<"ay";
            }
       }
       cout<<word;
    }
    return 0;
}
