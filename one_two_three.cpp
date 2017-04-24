#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   char word[6];
   cin>>test;
   while(test--)
   {
       cin>>word;
       if(strlen(word)==5)
        cout<<"3"<<endl;
       else if((word[0]=='t'&&word[1]=='w')||(word[0]=='t'&&word[2]=='o')||(word[1]=='w'&&word[2]=='o'))
        cout<<"2"<<endl;
       else
        cout<<"1"<<endl;
   }
   return 0;
}
