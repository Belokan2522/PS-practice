#include <stdio.h>
int main (void){
    int N = 0, X = 0;
    scanf("%d %d", &N, &X);
    int num[N];
    
    for(int i = 0; i<N; i++){
    scanf("%d", &num[i]);
    }

    for(int i = 0; i<N; i++){
    if (num[i]<X){
        printf("%d ", num[i]);
    }
    }
    return 0;
}