#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1;
    char s[20];
    while(cin>>s)
    {
       if(strcmp(s,"#")==0)
        break;
        cout<<"Case "<<n++<<": ";
       if(strcmp(s,"HELLO")==0)cout<<"ENGLISH"<<endl;

       else if(strcmp(s,"HOLA")==0)cout<<"SPANISH"<<endl;

       else if(strcmp(s,"HALLO")==0)cout<<"GERMAN"<<endl;

      else if(strcmp(s,"BONJOUR")==0)cout<<"FRENCH"<<endl;

      else if(strcmp(s,"CIAO")==0)cout<<"ITALIAN"<<endl;

      else if(strcmp(s,"ZDRAVSTVUJTE")==0)cout<<"RUSSIAN"<<endl;

      else cout<<"UNKNOWN"<<endl;
    }
    return 0;
}
