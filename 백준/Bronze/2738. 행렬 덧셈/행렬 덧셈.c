#include <stdio.h>
int main (void){
    int N = 0, M = 0;
    scanf("%d %d",&N,&M);
    int  A[101][101], B[101][101];
    for(int y = 0; y<N; y++){
        for(int x = 0; x<M; x++){
            scanf("%d",&A[x][y]);
        }
    }
     for(int y = 0; y<N; y++){
        for(int x = 0; x<M; x++){
            scanf("%d",&B[x][y]);
        }
    }
     for(int y = 0; y<N; y++){
        for(int x = 0; x<M; x++){
            int a = A[x][y]+B[x][y];
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}