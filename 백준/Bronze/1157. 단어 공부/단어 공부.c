#include <stdio.h>
#include <string.h>

int main(void){
    char s[1000000];
    int alphabet[26];
    int slen = 0;

    slen = strlen(s);
    scanf("%s",s);

    for(int i = 0; s[i] != '\0' ; i++){
            if ((s[i]>=97)&&(s[i]<=122)){
                s[i] -= 32;
            }
            if ((s[i]>=65)&&(s[i]<=90)){
            alphabet[s[i]-65]++;
            }
    }
    int c = 0;
    char b = 0;
    for(int i = 0; i<26; i++){
        if((c!=0)&&(c==alphabet[i])){
            b = '?';
        }
        if(c<alphabet[i]){
            c = alphabet[i];
            b = i+65;
        }
    }

    printf("%c",b);
    return 0;
}