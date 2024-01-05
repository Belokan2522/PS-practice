#include <stdio.h>
int main(void){
    int i = 0;
    char S[1000];
    scanf("%s",S);
    scanf("%d",&i);
    printf("%c",S[i-1]);
    return 0;
}