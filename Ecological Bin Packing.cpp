#include<bits/stdc++.h>
using namespace std;
int main()
{
  char c1,c2,c3;
  int brown[3],green[3],clr[3];
  while(cin>>brown[0]>>green[0]>>clr[0]>>brown[1]>>green[1]>>clr[1]>>brown[2]>>green[2]>>clr[2])
  {
      int minimum,maximum;
      minimum=brown[1]+brown[2]+clr[0]+clr[2]+green[0]+green[1];/// BCG combination....
      c1='B';
      c2='C';
      c3='G';
      maximum=brown[1]+brown[2]+green[0]+green[2]+clr[0]+clr[1];///BGC combination....

      if(minimum>maximum)
      {
        minimum=maximum;
         c1='B';
         c2='G';
         c3='C';
      }
      maximum=clr[1]+clr[2]+brown[0]+brown[2]+green[0]+green[1];///CBG combination.......

      if(minimum>maximum)
      {
        minimum=maximum;
         c1='C';
         c2='B';
         c3='G';
      }
      maximum=clr[1]+clr[2]+green[0]+green[2]+brown[0]+brown[1];///CGB combination......

      if(minimum>maximum)
      {
        minimum=maximum;
         c1='C';
         c2='G';
         c3='B';
      }
      maximum=green[1]+green[2]+brown[0]+brown[2]+clr[0]+clr[1];///GBC Combination....

      if(minimum>maximum)
      {
        minimum=maximum;
         c1='G';
         c2='B';
         c3='C';
      }
      maximum=green[1]+green[2]+clr[0]+clr[2]+brown[0]+brown[1];///GCB combination...
       if(minimum>maximum)
      {
        minimum=maximum;
         c1='G';
         c2='C';
         c3='B';
      }
    cout<<c1<<c2<<c3<<" "<<minimum<<endl;
  }
  return 0;
}
