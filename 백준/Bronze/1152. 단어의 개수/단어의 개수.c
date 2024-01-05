#include <stdio.h>
#include <string.h>

int main(void){
    int Slen = 0;
    char S[1000000];
    int i = 0, num_word = 0;

    scanf("%[^\n]s", S);
    Slen = strlen(S);

    if((S[0]!=' ')&&(S[Slen-1]!=' ')){
        for(int i = 0; i<Slen; i++){
            if(S[i] == ' '){
                num_word++;
            }
        }
        printf("%d",num_word+1);
    }
    // 시작과 끝에 공백 X

    if((S[0]==' ')&&(S[Slen-1]!= ' ')){
        for(int i = 0; i<Slen; i++){
            if(S[i] == ' '){
                num_word++;
            }
        }
        printf("%d",num_word);
    }
    //시작 공백, 끝 공백X

    if((S[0]!=' ')&&(S[Slen-1] == ' ')){
        for(int i = 0; i<Slen; i++){
            if(S[i] == ' '){
                num_word++;
            }
        }
        printf("%d",num_word);
    }
    //시작 공백X, 끝 공백


    if((S[0]==' ')&&(S[Slen-1]==' ')){
        for(int i = 0; i<Slen; i++){
            if(S[i] == ' '){
                num_word++;
            }
        }
        printf("%d",num_word-1);
    }
    //시작과 끝이 둘다 공백
    return 0;
}