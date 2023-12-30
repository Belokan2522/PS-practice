#include <stdio.h>
int main (void){
    int X = 0, N = 0, total = 0;

    scanf("%d", &X); 
    scanf("%d", &N);

    int a[N], b[N];

    for(int i = 1; i<=N; i++){
        scanf("%d %d", &a[i], &b[i]);
        total += a[i]*b[i];
    }
    if (X == total){
        printf("Yes");
    }
    else printf("No");
    return 0;
}