#include <stdio.h>
int main (void){
    int N = 0;
    scanf("%d",&N);
    N = N/4;
    for(int i = 1; i<=N; i++){
        printf("long ");
    }
    printf("int");
    return 0;
}