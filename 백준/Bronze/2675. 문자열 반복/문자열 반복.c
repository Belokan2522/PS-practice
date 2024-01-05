#include <stdio.h>
#include <string.h>

int main(void){
    int n = 0, Slen = 0, T = 0;
    char S[20];

    scanf("%d",&T);
    for(int y = 0; y<T; y++){
        scanf("%d %s", &n, S);
        Slen = strlen(S);
        for(int i = 0; i<Slen; i++){
            for(int x = 0; x<n; x++){
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }
    return 0;
}