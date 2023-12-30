#include <stdio.h>
int main(void){
    int N = 0;
    scanf("%d", &N);

    for(int i = 1; i<=N; i++){
        for(int y = N; y>i; y--){
            printf(" ");
        }
        for(int x = 1; x<=i; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}