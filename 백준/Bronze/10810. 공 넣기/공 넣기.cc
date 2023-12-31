#include <stdio.h>
int main (void){
    int N = 0, M = 0, i = 0, j = 0, k = 0;
    scanf("%d %d",&N,&M);
    int baguni[N];
    for(int x = 0; x<N; x++){
        baguni[x] = 0;
    }

    for(int x = 0; x<M; x++){
        scanf("%d %d %d",&i,&j,&k);
        for(int y = i; y<=j; y++){
            baguni[y-1] = k;
        }
    }

    for (int x = 0; x<N; x++){
        printf("%d ",baguni[x]);
    }
    return 0;
}