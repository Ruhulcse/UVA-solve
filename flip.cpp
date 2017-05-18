#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n;

    while ( scanf ("%d", &n) != EOF ) {
        int a [1000 + 5];

        for ( int i = 0; i < n; i++ )
            scanf ("%d", &a [i]);

        int cnt = 0;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = i + 1; j < n; j++ )
                if ( a [i] > a [j] ) cnt++;
        }

        printf ("Minimum exchange operations : %d\n", cnt);
    }

    return 0;
}
