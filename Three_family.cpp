#include<bits/stdc++.h>
using namespace std;
int main () {
    int x,y,z,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d", &x,&y,&z);
        printf("%d\n",z*(2*x-y)/(x+y));
    }
    return 0;
}
