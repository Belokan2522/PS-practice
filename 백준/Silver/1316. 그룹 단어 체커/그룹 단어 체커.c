#include <stdio.h>
#include <string.h>

int main(void){
    int n = 0, slen = 0, q = 0;
    char s[100];
    scanf("%d", &n);
    int count = n;
    for(int i = 0; i<n; i++){
        scanf("%s",s);
        slen = strlen(s);
        for(int x = 0; x<slen; x++){
            for(int y = 0; y<slen; y++){
                if((s[x]==s[y])&&(x!=y)&&(s[x]!=s[y-1])&&(s[x-1]!=s[y])){
                    count--;
                    q = 1;
                    break;
                }

            }
            if(q==1){
                q = 0;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}