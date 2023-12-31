#include <stdio.h>

int main(void){
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int baguni[N], con[N], i[M], j[M];
    for(int x = 0; x<N; x++){
        baguni[x] = x+1;
        con[x] = x+1;
    }
    for(int x = 0; x<M; x++){
        scanf("%d %d", &i[x], &j[x]);
        for(int p = i[x]-1, q = j[x]-1, w = 0; p<=q; p++, w++){
        baguni[p] = con[q-w];
        }
        for(int x = 0; x<N; x++){
            con[x] = baguni[x];
        }
    }
    for(int x = 0; x<N; x++){
        printf("%d ",baguni[x]);
    }
    return 0;
}