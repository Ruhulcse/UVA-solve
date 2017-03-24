 #include<iostream>
 #include<cstdio>
 using namespace std;
 int main()
 {
     int A[70],n,m,i,j,s;
     cin>>n;
     while(n--)
     {
         cin>>m;
         for(i=s=0;i<m;i++)
         {
             cin>>A[i];
         }
         /*sort*/
         for(i=0;i<m-1;i++)
         {
             for(j=i+1;j<m;j++)
             {
                 if(A[i]>A[j])
                    s++;
             }
         }
         printf("Optimal train swapping takes %d swaps.",s);
     }
     return 0;
 }
