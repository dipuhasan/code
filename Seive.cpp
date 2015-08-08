#include<bits/stdc++.h>

#define limit 1000

int main(){
    unsigned long long int i,j;
    int *primes;

    primes = (int *)malloc(sizeof(int)*limit);

    for (i=2; i<=limit; i++)
        primes[i]=1;
    
    /*sqrt(n)*/
    for (i=2; i<=sqrt(limit); i++)
        if(primes[i])
            for( j = i; i*j<=limit; j++ )
                primes[i*j]=0;
                
//print seive
    for(i=2; i<=limit; i++)
        if (primes[i])
            printf("%d\n",i);


 return 0;
}
