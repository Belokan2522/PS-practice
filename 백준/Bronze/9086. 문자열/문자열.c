#include <stdio.h>
#include <string.h>

int main(void){
    int n = 0, length = 0;
    char s[999];
    scanf("%d",&n);

    for (int i =0; i<n; i++){
        scanf("%s",s);
        length = strlen(s);
        printf("%c%c\n",s[0],s[length-1]);
    }
    return 0;
}