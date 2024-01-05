#include <stdio.h>
#include <string.h>

int main (void){
    int slen = 0, t = 0;
    char s[15];

    scanf("%s", s);
    slen = strlen(s);

    for(int i = 0; i<slen; i++){
        if((s[i]>=65)&&(s[i]<=67)){
            t += 3;
        }
        else if((s[i]>=68)&&(s[i]<=70)){
            t += 4;
        }
        else if((s[i]>=71)&&(s[i]<=73)){
            t += 5;
        }
        else if((s[i]>=74)&&(s[i]<=76)){
            t += 6;
        }
        else if((s[i]>=77)&&(s[i]<=79)){
            t += 7;
        }
        else if((s[i]>=80)&&(s[i]<=83)){
            t += 8;
        }
        else if((s[i]>=84)&&(s[i]<=86)){
            t += 9;
        }
        else if((s[i]>=87)&&(s[i]<=90)){
            t += 10;
        }
    }
    printf("%d",t);
    return 0;
}