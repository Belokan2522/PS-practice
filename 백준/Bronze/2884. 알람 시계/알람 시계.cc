#include <stdio.h>
int main(void){
    int H, M;
    int hour;

    scanf("%d %d",&H,&M);
    hour = H*60 + M;
    hour -= 45;
    if (hour<0){
        H = 23;
        M = 60 + hour;
    }
    else{
        H = hour/60;
        M = hour%60;
    }
    printf("%d %d",H,M);
    return 0;
}