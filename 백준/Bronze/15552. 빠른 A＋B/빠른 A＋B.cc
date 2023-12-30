#include <stdio.h>
int main(void){
    int T = 0;
    scanf("%d",&T);
    int A[T], B[T];

    for(int i = 1; i<=T; i++){
        scanf("%d %d", &A[i], &B[i]);
    }
    for(int x = 1; x<=T; x++){
        printf("%d\n",A[x]+B[x]);
    }
    return 0;
}