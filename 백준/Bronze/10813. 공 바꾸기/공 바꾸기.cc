#include <stdio.h>
int main (void){
    int N = 0, M = 0, i = 0, j = 0, Q = 0;
    scanf("%d %d",&N,&M);
    int baguni[N];

    for(int x = 0; x<N; x++){
        baguni[x] = x+1;
    }

    for(int x = 0; x<M; x++){
        scanf("%d %d",&i,&j);
        i--; j--;
        Q = baguni[i];
        baguni[i] = baguni[j];
        baguni[j] = Q;
    }

    for(int x = 0; x<N; x++){
        printf("%d ", baguni[x]);
    }
    return 0;
}