#include <stdio.h>
int main (void){
    int N = 0, B = 0, Q = 0;
    int ans[30] = {0};
    char s[30];
    scanf("%d %d",&N,&B);

    for(int i = 0; i<30; i++){
        ans[i] = N % B;
        N /= B;
    }

    for(int i = 0; i<30; i++){
        if((ans[i]>=0)&&(ans[i]<=9)){
            ans[i] += 48;
        }
        if((ans[i]>=10)&&(ans[i]<=35)){
            ans[i] += 55;
        }
    }
    for(int i = 0; i<30; i++){
        s[30-1-i] = ans[i];
    }
    for(int i = 0 ; i<30; i++){
        if(s[i]!=48){
            Q = i;
            break;
        }
    }
   for(int i = Q; i<30; i++){
       printf("%c",s[i]);
    }

    return 0;
}