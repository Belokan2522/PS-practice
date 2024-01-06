#include <stdio.h>
int main(void){
    int n = 0;
    scanf("%d",&n);
    for(int x = 0; x<n-1; x++){
        for(int i = 0; i<n-x-1; i++){
            printf(" ");
        }
        for(int i = 0; i<2*x+1; i++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i<n*2-1; i++){
        printf("*");
    }
    printf("\n");
    for(int x = n-2; x>=0; x--){
        for(int i = 0; i<n-x-1; i++){
            printf(" ");
        }
        for(int i = 0; i<2*x+1; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}