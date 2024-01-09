#include <stdio.h>
int main (void){
    char s[5][15] = {0};

    for(int  r = 0; r<5; r++){
       scanf("%s",s[r]);
    }

    for(int c = 0; c<15; c++){
        for(int r = 0; r<5; r++){
            if(s[r][c] != ' ' && s[r][c] != '\0') {
                printf("%c",s[r][c]);
            }
    }
    }
    return 0;
}