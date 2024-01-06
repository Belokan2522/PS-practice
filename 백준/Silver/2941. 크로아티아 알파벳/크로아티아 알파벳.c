#include <stdio.h>
#include <string.h>

int main(void){
    char s[100];
    int slen = 0, count = 0;
    scanf("%s",s);
    slen = strlen(s);

    for(int i = 0; s[i] != '\0'; i++){
        if((s[i]=='c')&&(s[i+1]=='=')){
            count++;
            i++;
        }
        else if((s[i]=='c')&&(s[i+1]=='-')){
            count++;
            i++;
        }
        else if((s[i]=='d')&&(s[i+1]=='z')&&(s[i+2]=='=')){
            count++;
            i++;
            i++;
        }
        else if((s[i]=='d')&&(s[i+1]=='-')){
            count++;
            i++;
        }
        else if((s[i]=='l')&&(s[i+1]=='j')){
            count++;
            i++;
        }
        else if((s[i]=='n')&&(s[i+1]=='j')){
            count++;
            i++;
        }
        else if((s[i]=='s')&&(s[i+1]=='=')){
            count++;
            i++;
        }
        else if((s[i]=='z')&&(s[i+1]=='=')){
            count++;
            i++;
        }
        else count++;
    }
    printf("%d",count);
    return 0;
}