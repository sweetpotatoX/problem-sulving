//
// Created by abdob on 10/29/2022.
//
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
int N =99998953;
int status[3200000];
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int main ()
{
    int i, j, sqrtN, n;
    sqrtN = int( sqrt( N ) );
    //freopen ("out.txt", "w", stdout);
    /*for (i = 4; i <= N; i += 2) {
        status[i/32] |= (1 << (i %32));
    }*/
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( check(status[i/32],i%32)==0)
        {
            for( j = i*i; j <= N; j += 2*i )
            {
                status[j/32]=Set(status[j/32],j % 32);
            }
        }
    }
    puts("2");
    n = 1;
    for(i=3;i<=N;i+=2)
        if( check(status[i/32],i%32)==0) {
            n++;
            if ( n % 100 == 1)
                printf("%d\n",i);
        }
    return 0;
}
