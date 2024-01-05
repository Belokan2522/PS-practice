#include <stdio.h>
#include <string.h>

int main(void){
    char s[100];
    int alphabet[26];
    int Q[26];
    scanf("%s", s);
    int length = 0;
    length = strlen(s);  

    for (int i = 0; i<26; i++){
        alphabet[i] = i+97;
        Q[i] = -1;
    }

    for(int i = 0; i<26; i++){
        for(int x = 0; x<length; x++){
            if (s[x]== alphabet[i]){
                Q[i] = x;
                break;
            }
        } 
    }
    for(int i = 0; i<26; i++){
    printf("%d ", Q[i]);
    }
    return 0;
}