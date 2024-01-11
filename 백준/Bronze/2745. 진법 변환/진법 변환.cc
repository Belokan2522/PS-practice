#include <stdio.h>
#include <string.h>
int power(int c, int d)
{
    int i,j;
    j = c;
    for(i=-0; i<d-1; i++) j=j*c;
    if (d==0){
        j = 1;
    }
    return j;
}
int main (void){
    char N[30] = {0};
    int B = 0;
    int slen = 0;
    scanf("%s %d",N,&B);
    slen = strlen(N);
    for (int i = 0; i<slen; i++){
        if ((N[i]>=48)&&(N[i]<=57)){
            N[i] -= 48;
        }
        if ((N[i]>=65)&&(N[i]<=90)){
            N[i] -= 55;
        }
    }
    
    int ans[slen];
    int a = 0;

    for(int i = 0; i<slen; i++){
        ans[slen-1-i] = N[slen-1-i] * power(B,i);
    }
    for (int i =0; i<slen; i++){
        a+= ans[i];
        }

    printf("%d",a);
    return 0;
}

