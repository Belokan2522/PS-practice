#include <stdio.h>
#include <string.h>

int main(void){
    int slen = 0, a = 0, cmp = 0;
    char s[100] = {0}, q[100] = {0};
    scanf("%s",s);
    slen = strlen(s);

    for(int i = 0; i<slen; i++){
        q[slen-1-i] = s[i];
     }
    if (strcmp(s, q) == 0) {
            cmp = 1;
        } else {
            cmp = 0;
        }
    printf("%d",cmp);
    return 0;
}